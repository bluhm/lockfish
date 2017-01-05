#from mydump import *
from obsdanalysis import *
from clangparser import *
from lazy import *
from clang.cindex import CursorKind

configs= { 'sl': {'p': 'tests/csourcelim', 'r': 'if_linkstate', 'maxdepth': 3},
           'tc': {'p': 'tests/testc', 'r': 'a', 'maxdepth': 20}
           }

def main():
  conf = 'tc'

  mypath = configs[conf]['p']
  rootname = configs[conf]['r']

  print "Parsing in", mypath

  tus =  parse_folder(mypath) # translation units
  cursors = get_cursors(tus) # iterable cursors
  contents = ncl(cursors) # wrapped in a lazy collection for performance

  allfuncs = contents.ofkind(CursorKind.FUNCTION_DECL)
  print "Done\n"

  print "Buidling Call Graph for", rootname
  cg = build_call_graph(allfuncs, rootname, maxdepth = configs[conf]['maxdepth'])
  cg.pprint()
  print "Done\n"

  print "Analyzing Locks"
  lock_analysis(cg)
  print "Done\n"

  print "Analyzing pointers:"
  pointer_analysis(cg.getAllNames(), contents)
  print "Done\n"

if __name__ == '__main__':
  main()


