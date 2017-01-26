#!/usr/bin/env python

from clan.obsdanalysis import *
from clan.clangparser import *
from clan.lazy import *
from clang.cindex import CursorKind
from clan.cgutils import *

configs= {
           'sl3': {'p': 'tests/csourcelim', 'r': 'if_linkstate', 'maxdepth': 3, 'ext': '.c'},
           'sl': {'p': 'tests/csourcelim', 'r': 'if_linkstate', 'maxdepth': 100, 'ext': '.c'},
           'cs3': {'p': 'csource', 'r': 'if_linkstate', 'maxdepth': 3, 'ext': '.c'},
           'cs': {'p': 'csource', 'r': 'if_linkstate', 'maxdepth': 30},
           'ncs3': {'p': 'csource', 'r': 'if_linkstate', 'maxdepth': 3, 'ext': '.i'},
           'ncs': {'p': 'csource', 'r': 'if_linkstate', 'maxdepth': 30, 'ext': '.i'},
           'tc': {'p': 'tests/testc', 'r': 'a', 'maxdepth': 20, 'ext': '.c'},
           'rsm': {'p': 'csource', 'r': 'rt_sendmsg', 'maxdepth': 30, 'ext': '.i'},
           }

import sys

def help():
  print "Usage: ", sys.argv[0],'[', '|'.join(configs.keys()), ']'
  sys.exit(0)

def main():
  if len(sys.argv) != 2:
    help()
  conf = sys.argv[1]
  if 'help' in conf or '-h' in conf or conf not in configs:
    help()

  mypath = configs[conf]['p']
  rootname = configs[conf]['r']

  print "Parsing in", mypath

  tus =  parse_folder(mypath, ext = configs[conf]['ext']) # translation units
  cursors = get_cursors(tus) # iterable cursors
  contents = ncl(cursors) # wrapped in a lazy collection for performance

  allfuncs = contents.ofkind(CursorKind.FUNCTION_DECL).shallow().maxdepth(1)
  print "Done"

  print "\nBuilding caller table..."
  callertable = build_caller_table(allfuncs)
  print "Caller table built"

  print "\nBuilding caller graph for", rootname
  cg = build_call_graph(callertable, allfuncs, rootname, maxdepth = configs[conf]['maxdepth'])
  print "Done"
  print "\nCaller graph:"
  cg.pprint()

  print "\nAnalyzing locks:"
  lock_analysis(cg)
  print "Done"

  print "\nAnalyzing pointers:"
  pointer_analysis(cg.getAllNames(), contents)
  print "Done"

if __name__ == '__main__':
  main()


