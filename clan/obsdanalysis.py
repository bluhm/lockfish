from nodeutils import *
from cgutils import *
from pointerutils import *
from callgraph import *

def takes_lock(func):
  for c in get_all_descendants(func).spelled("rw_enter_write"):
    if get_all_descendants(c).spelled("netlock").some():
      return True
  return False

def build_call_graph(allfuncs, rootname, maxdepth = 20):
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

  print "Building caller table..."
  callertable = build_caller_table(allfuncs)
  print "Caller table built"

  while len(ws) > 0:
    curr = ws.pop()
    callers = get_callers(curr.spell(), callertable)
    for call in callers:
      node = makeNode(call)
      if cg.addCall(curr, node):
        if not takes_lock(call):
          depth = len(node.getStack())
          if depth <= maxdepth:
            ws.append(node)
            print "New caller added: ", node.spell(), "at depth:", depth
          else:
            print "! -> Maximal depth of", maxdepth, "achieved when adding", node.spell()+'()', "calling", curr.spell()+'()'
        else:
          print "Not adding to ws, because takes lock: ", node.spell()
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
  ptable = build_pointers_table(alldecls, allfuncs)
  print "Pointers table built"

  for fname in allfuncs:
    ptrs = get_pointers(fname, ptable)
    if len(ptrs) > 0:
      print fname, "is pointed to from"
      nc(ptrs).pprint()
    else:
      print "No pointers to", fname

def lock_analysis(cg):
  leaves = cg.getLeaves()
  for leaf in leaves:
    stack = leaf.getStack()
    locks = False
    for call in stack:
      if takes_lock(call.node):
        locks = True
        break
    if not locks:
      print "Lock not found: ", stack

