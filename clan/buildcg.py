#from mydump import *
from obsdanalysis import *
from clangparser import *
from lazy import *
from clang.cindex import CursorKind

def main():
  print "PARSING"
  mypath = 'tests/csourcelim'
  rootname = 'if_linkstate'

  tus =  parse_folder(mypath) # translation units
  cursors = get_cursors(tus) # iterable cursors
  alldecls = ncl(cursors).ofkind(CursorKind.FUNCTION_DECL)

  print "Done\n"

  print "Buidling Call Graph"
  cg = build_call_graph(alldecls, rootname, maxdepth=2)
  cg.pprint()
  print "Done\n"

  print "Analyzing Locks"
  lock_analysis(cg)
  print "Done\n"

  print "Analyzing pointers:"
  pointer_analysis(cg.getAllNames(), alldecls)
  print "Done\n"

if __name__ == '__main__':
  main()
