from nodeutils import *
from cgutils import *
from callgraph import *

def takes_lock(func):
  return get_descendants(func, lambda node: node.spelling == "rw_enter_write").all_descendants().any(lambda n: n.spelling == "netlock")

def build_call_graph(alldecls, rootname):
  cg = CallGraph()
  # finding the root node
  rootdecls = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == rootname).tonc()
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
  callertable = build_caller_table(alldecls)
  print "Caller table built"

  while len(ws) > 0:
    curr = ws.pop()
    callers = get_callers(curr.spell(), callertable)
    for call in callers:
      node = makeNode(call)
      if cg.addCall(curr, node):
        if not takes_lock(call):
          ws.append(node)
          print "New caller added: ", node.spell()
        else:
          print "Not adding to ws, because takes lock: ", node.spell()
  return cg


def pointer_analysis(targets, alldecls):
  allfuncs = targets
  ptable = build_pointers_table(alldecls, allfuncs)
  for fname in allfuncs:
    print "Analyzing", fname
    ptrs = get_pointers(fname, ptable)
    if len(ptrs) > 0:
      print fname, "is pointed to from"
      nc(ptrs).pprint()
  print("Done")


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
  print "Done\n"

