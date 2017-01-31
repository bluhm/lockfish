#!/usr/bin/env python

from clan.obsdanalysis import *
from clan.clangparser import *
from clan.lazy import *
from clang.cindex import CursorKind
from clan.cgutils import *

configs= {
           'limited3': {'p': 'tests/csourcelim', 'r': ['if_linkstate'], 'maxdepth': 3, 'ext': '.c'},
           'limited': {'p': 'tests/csourcelim', 'r': ['if_linkstate'], 'maxdepth': 100, 'ext': '.c'},
           'cs3': {'p': 'csource', 'r': ['if_linkstate'], 'maxdepth': 3, 'ext': '.i'},
           'cs': {'p': 'csource', 'r': ['if_linkstate'], 'maxdepth': 30, 'ext': '.i'},
           'simple': {'p': 'tests/simple_c', 'r': ['a'], 'maxdepth': 20, 'ext': '.c'},
           'callgraph': {'p': 'tests/cg_c', 'r': ['a'], 'maxdepth': 20, 'ext': '.c'},
           'rec': {'p': 'tests/rec_c', 'r': ['a'], 'maxdepth': 20, 'ext': '.c'},
           'tdb': {'p': 'tests/tdb_c', 'r': ['a'], 'maxdepth': 20, 'ext': '.c'},
           'pfc': {'p': 'tests/pfc', 'r': ['pfkey_sendup'], 'maxdepth': 30, 'ext': '.c'},
           'pfctdb': {'p': 'tests/pfc', 'r': ['pfkeyv2_dump_walker'], 'maxdepth': 30, 'ext': '.c'},
           'takeslock': {'p': 'tests/takes_lock_c', 'r': ['a'], 'maxdepth': 30, 'ext': '.c'},
           'rsm': {'p': 'csource', 'r': ['rt_sendmsg'], 'maxdepth': 30, 'ext': '.i'},
           }

import sys

def help():
  print "Usage: \n\t", sys.argv[0],'config (', '|'.join(sorted(configs.keys())), ')', '\n\tor\n\t', sys.argv[0], 'roots root1 [root2 root3 ...]\n'
  sys.exit(0)

def main():

  if len(sys.argv) <= 2:
    help()

  conf = sys.argv[1]

  if 'help' in conf or '-h' in conf:
    help()

  if conf == 'config' and sys.argv[2] in configs:
    conf = sys.argv[2]
    print "Taking config: ", conf
  elif conf == 'roots':
    conf = 'custom'
    content = configs['cs']
    content['r'] = sys.argv[2:]
    configs[conf] = content
  else:
    help()

  mypath = configs[conf]['p']
  print "Parsing in", mypath

  tus =  parse_folder(mypath, ext = configs[conf]['ext']) # translation units
  cursors = get_cursors(tus) # iterable cursors
  contents = ncl(cursors) # wrapped in a lazy collection for performance

  allfuncs = contents.ofkind(CursorKind.FUNCTION_DECL).shallow().maxdepth(1)

  print "\nBuilding caller table..."
  callertable = build_caller_table_obsd(allfuncs)

  for rootname in configs[conf]['r']:
    print "\n ############# ANALYSIS FOR %s #############   " % rootname.upper()
    print "\nBuilding caller graph for", rootname
    cg = build_call_graph(callertable, allfuncs, rootname, maxdepth = configs[conf]['maxdepth'])
    print "Done"
    print "\nCaller graph:"
    cg.pprint()

    print "\nAnalyzing locks:"
    lock_analysis(cg)
    print "Done"

    print "\nAnalyzing pointers:"
    v = GetNodesForPointerAnalysisVisitor()
    cg.acceptVisitor(v)
    pointer_analysis(v.names, contents)
    print "Done"

if __name__ == '__main__':
  main()


