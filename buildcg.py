from mydump import *
from callgraph import *

def build_call_graph(alldecls, rootname):
  cg = CallGraph()
  root = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == rootname)[1]
  root = makeNode(root)
  cg.root = root

  curr = None
  ws = [root]

  while len(ws) > 0:
    curr = ws.pop()
#    print "\n\nBUILDING CALL GRAPH"
#    print "Current:", curr
#    print "WS", ws
#    print "Graph:"
#    cg.pprint()

    callers = get_callers(curr.spell(), alldecls)
    for call in callers:
      node = makeNode(call)
#      print "New caller: ", node
      if cg.addCall(curr, node):
#        print "Added to graph and ws"
        ws.append(node)
        print "New caller added: ", node.spell()

  return cg

def main():
  print "PARSING"
  mypath = 'csourcelim'
  alldecls = get_all_decls(mypath)
  print "Done\n"

  print "Buidling Call Graph"
  rootname = 'if_linkstate'
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
  for fname in allfuncs:
    print "Analyzing", fname
    ptrs = get_pointers(fname, alldecls)
    if len(ptrs) > 0:
      print fname, "is pointed to from"
      ptrs.pprint()
  print("Done")


if __name__ == '__main__':
  main()
