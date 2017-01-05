#!python
from clangparser import *
from utils import *
from nc import nc
from lazy import ncl
from nodeutils import *
from obsdanalysis import *


def get_all_decls(mypath, ext='.c'):
  from os import listdir
  from os.path import isfile, join, splitext
  onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f)) and splitext(f)[1] == ext]

  print "Files to parse:", len(onlyfiles)
  alldecls=nc([])

  i = 0
  for f in onlyfiles:
    print "Parsing",f
    tu = parse(join(mypath,f))
    decls = get_descendants(tu.cursor, lambda node: node.kind == CursorKind.FUNCTION_DECL)
    print "Imported declarations:", len(decls)
    alldecls.extend(decls)
    print "Total declarations: ", len(alldecls)
    i+=1
    print "Progress:", i, "/", len(onlyfiles)

  return alldecls

def main():
    mypath = 'tests/csourcelim'
    print "Parsing from", mypath
    alldecls = get_all_decls(mypath)

    funcname = "if_linkstate"
    locking = "if_linkstate_task"

    fs = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == locking)
    fs.pprint()
    for f in fs:
        mpprint(f)
        print "Takes lock", takes_lock(f)

if __name__ == '__main__':
    main()


