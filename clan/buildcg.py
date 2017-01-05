from mydump import *
from callgraph import *
from nodeutils import *
from cgutils import *
from pointerutils import *
from obsdanalysis import takes_lock

def build_call_graph(alldecls, rootname):
  cg = CallGraph()
  rootdecls = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == rootname)
  try:
    root = rootdecls[1]
  except:
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
#    print "\n\nBUILDING CALL GRAPH"
#    print "Current:", curr
#    print "WS", ws
#    print "Graph:"
#    cg.pprint()

    callers = get_callers(curr.spell(), callertable)
    for call in callers:
      node = makeNode(call)
#      print "New caller: ", node
      if cg.addCall(curr, node):
        if not takes_lock(call):
          ws.append(node)
          print "New caller added: ", node.spell()
        else:
          print "Not adding to ws, because takes lock: ", node.spell()
  return cg

def main():
  print "PARSING"
  mypath = 'tests/csourcelim'
  rootname = 'if_linkstate'
#  rootname = 'f'

  alldecls = get_all_decls(mypath, '.c')
  print "Done\n"

  print "Buidling Call Graph"
  cg = build_call_graph(alldecls, rootname)
  cg.pprint()
  print "Done\n"


  print "Analyzing Locks"
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

  print "Analyzing pointers:"
  allfuncs = cg.getAllNames()
  ptable = build_pointers_table(alldecls, allfuncs)
  for fname in allfuncs:
    print "Analyzing", fname
    ptrs = get_pointers(fname, ptable)
    if len(ptrs) > 0:
      print fname, "is pointed to from"
      nc(ptrs).pprint()
  print("Done")


if __name__ == '__main__':
  main()
