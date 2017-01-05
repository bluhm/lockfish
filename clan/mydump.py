#!python
from clangparser import *
from utils import *
from nc import nc
from lazy import ncl
from nodeutils import *


def get_all_decls(mypath, ext='.i'):
    from os import listdir
    from os.path import isfile, join, splitext
    onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f)) and
      splitext(f)[1] == ext]

    alldecls=nc([])

    i = 0
    for f in onlyfiles:
        print "Parsing",f
        tu = parse(join(mypath,f))
        decls = get_descendants(tu.cursor, lambda node: node.kind == CursorKind.FUNCTION_DECL)
#        print "Imported declarations:", len(decls)
        alldecls.extend(decls)
	del decls
	del tu
    #    print "Total declarations: ", len(alldecls)
        i+=1
        print "Progress:", i, "/", len(onlyfiles)

    return alldecls

def main():
    mypath = '../csourcelim'
    alldecls = get_all_decls(mypath)

    funcname = "if_linkstate"

    locking = "if_linkstate_task"

    fs = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == locking)
    fs.pprint()
    for f in fs:
        print "Takes lock", takes_lock(f)

#    pprint(('diags', map(get_diag_info, tu.diagnostics)))
#    pprint(('nodes', get_info(tu.cursor)))

#    pprint(get_info(ourfunc, 0))

#    print "Any named: ", funcname, decls.any(lambda d: d.spelling == funcname)


#    decls.filter(lambda n: n.spelling == funcname).pprint()

if __name__ == '__main__':
    main()


