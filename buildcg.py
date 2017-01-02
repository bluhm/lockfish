from mydump import *
from callgraph import *

def build_call_graph(alldecls, rootname):
  cg = CallGraph()
  root = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == rootname)[1]
  root = makeNode(root)
  cg.root = root

  curr = None
  ws = [root]
#  done = []

  while len(ws) > 0:
    curr = ws.pop()
    print "\n\nSTATE"
    print "Current:", curr
    print "WS", ws
#    print "Done", done
    print "Graph:"
    cg.pprint()

    callers = get_callers(curr.spell(), alldecls)
    for call in callers:
      node = makeNode(call)
      print "New caller: ", node
#      if node.spell() in done:
#        print "Done already"
#        continue
      if cg.addCall(curr, node):
        print "Added to graph and ws"
        ws.append(node)
#    print "Adding to done: ", curr.spell()
#    done.append(curr.spell())

  return cg

def main():
  mypath = 'csourcelim'
  alldecls = get_all_decls(mypath)
  rootname = 'if_linkstate'
  cg = build_call_graph(alldecls, rootname)


  print "Done building call graph, result: "
  cg.pprint()

  leaves = cg.getLeaves()

  print "Leaves: ", leaves
  for leaf in leaves:
    stack = leaf.getStack()
    locks = False
    for call in stack:
      if takes_lock(call.node):
        locks = True
        break
    if not locks:
      print "Not taking lock here: ", stack


if __name__ == '__main__':
  main()
