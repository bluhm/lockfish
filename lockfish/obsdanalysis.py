from nodeutils import *
from cgutils import *
from pointerutils import *
from callgraph import *
from utils import *

# func takes lock around a call to targ
def takes_lock_for(func, targ):
  locks = nc([])
  unlocks = nc([])
  calls = nc([])

  for c in get_all_descendants(func).spelled("_rw_enter_write"):
    if get_all_descendants(c).spelled("netlock").some():
      locks.append(c)
  for c in get_all_descendants(func).spelled("solock"):
    locks.append(c)

  if len(locks) == 0:
    return False

  for c in get_all_descendants(func).spelled("_rw_exit_write"):
    if get_all_descendants(c).spelled("netlock").some():
      unlocks.append(c)
  for c in get_all_descendants(func).spelled("sounlock"):
    unlocks.append(c)

  call = targ.spelling

  for c in get_all_descendants(func).spelled(call).ofkind(CursorKind.CALL_EXPR):
    calls.append(c)

  locklines = sorted([ c.location.line for c in locks ])
  unlocklines = sorted([ c.location.line for c in unlocks ])
  calllines = sorted([ c.location.line for c in calls ])

  for callline in calllines:
    try:
      nearestlock = max([l for l in locklines if l < callline])
      nearestunlock = min([l for l in unlocklines if l > nearestlock])
      if not ( nearestlock < callline and callline < nearestunlock):
        return False
    except ValueError: # either no locks or no unlocks found 
      return False

  return True


def build_call_graph(callertable, allfuncs, rootname, maxdepth = 20):
  cg = CallGraph()
  # finding the root node
  print "Searching for the root function..."
  rootdecls = allfuncs.spelled(rootname).maxdepth(1).shallow().tonc()
  # usually it is the second one, the definition, the first one is a declaration only
  try:
    root = rootdecls[1]
  except:
    # not the case in some test files
    root = rootdecls[0]
  root = makeNode(root)
  cg.root = root

  curr = None
  ws = [root]
  done = set()

  while len(ws) > 0:
    curr = ws.pop()
    callers = get_callers(curr.spell(), callertable)

    for call in callers:

      callerNode = makeNode(call)

      if callerNode.spell() not in done:
        done.add(callerNode.spell())
      else:
        statusup("Already done: " + callerNode.spell())
        callerNode.analyzed = True
        if not cg.addCall(curr, callerNode):
          print "Failure in algorithm to add already done node!"
        continue

      if cg.addCall(curr, callerNode):
        if not takes_lock_for(call, curr.node):
          depth = len(callerNode.getStack())
          if depth <= maxdepth:
            ws.append(callerNode)
            statusup("New caller added: " + callerNode.spell() + " at depth: " + str(depth))
          else:
            print "! -> Maximal depth of", maxdepth, "reached when adding", callerNode.spell()+'()', "calling", curr.spell()+'()'
        else:
          statusup("Not adding to ws, because takes lock: " + callerNode.spell())
      else:
        statusup("Not adding to caller graph: " + callerNode.spell())
  return cg


def pointer_analysis(targets, contents):
  allfuncs = targets
  alldecls = contents.filter( lambda n:
    n.kind == CursorKind.FUNCTION_DECL or
     n.kind == CursorKind.VAR_DECL or
     n.kind == CursorKind.STRUCT_DECL or
     n.kind == CursorKind.UNION_DECL or
     n.kind == CursorKind.CLASS_DECL or
     n.kind == CursorKind.ENUM_DECL or
     n.kind == CursorKind.FIELD_DECL or
     n.kind == CursorKind.ENUM_CONSTANT_DECL
      ).shallow()

  print "Building pointers table..."
  ptable = build_pointers_table_obsd(alldecls, allfuncs)

  print "Pointers table: ", ptable
  for fname in allfuncs:
    ptrs = get_pointers(fname, ptable)
    if len(ptrs) > 0:
      print fname, "pointed from:", ptrs
    else:
      pass
#      print "No pointers to", fname

def lock_analysis(cg):
  leaves = cg.getLeaves()
  for leaf in leaves:
    # analyzed at another point in the tree
    if leaf.analyzed:
      continue
    stack = leaf.getStack()
    locks = False
    for i, call in enumerate(list(reversed(stack))[:-1]):
      if takes_lock_for(call.node, stack[i+1].node):
        locks = True
        break
    if not locks:
      print "No lock:", stack


class tbd_detector:
  def detect(self, f):
    res = []
    for call in get_all_descendants(f).filter(lambda n: n.kind == CursorKind.CALL_EXPR).spelled("tdb_walk"):
      args = call.get_children() # inside the tdb
      for i, a in enumerate(args):
        if i == 2: #second argument to tdb_walk
          complex = False #first assume a function pointer
          for j, c in enumerate(a.get_children()): #inside the second argument, to eliminate complex expressions
            if j == 0 and c.kind == CursorKind.DECL_REF_EXPR:
              called = c # call detected
            if j >=1 or c.kind != CursorKind.DECL_REF_EXPR:
              complex = True
              break
          if not complex:
            res.append(called)
          else:
            print "Complex tdb_walk call found! Please, check it manually: ", get_info(call)['location']
          break #only interested in the second argument

    return res

def build_caller_table_obsd(allfuncs):
  detectors = [tbd_detector()]
  return build_caller_table(allfuncs, detectors)

def build_pointers_table_obsd(alldecls, allfuncs):
  detectors = [tbd_detector()]
  return build_pointers_table(alldecls, allfuncs, detectors)

class GetNodesForPointerAnalysisVisitor:
  def __init__(self):
    self.names = []
  def visit(self, node):
    if node is None:
      return
    if node.spell() in self.names:
      return
    else:
      stack = node.getStack()
      if len(stack) > 1:
      	if takes_lock_for(node.node, stack[-2].node):
      	  return
      self.names.append(node.spell())

