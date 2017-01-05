#from mydump import *
from callgraph import *
from nodeutils import *
from cgutils import *
from pointerutils import *
from obsdanalysis import build_call_graph, pointer_analysis
from clangparser import *
from lazy import *
from clang.cindex import CursorKind

def main():
  print "PARSING"
  mypath = 'tests/csourcelim'
  rootname = 'if_linkstate'
#  rootname = 'f'
#  alldecls = get_all_decls(mypath, '.c')
  alldecls = ncl(get_cursors(parse_folder(mypath))).filter(lambda n: n.kind == CursorKind.FUNCTION_DECL)

  print "Done\n"

  print "Buidling Call Graph"
  cg = build_call_graph(alldecls, rootname)
  cg.pprint()
  print "Done\n"


  print "Analyzing Locks"
  lock_analysis(cg)

  print "Analyzing pointers:"
  pointer_analysis(cg.getAllNames(), alldecls)

if __name__ == '__main__':
  main()
