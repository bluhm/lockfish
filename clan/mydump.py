#!python
from clangparser import *
from utils import *
from nc import nc
from lazy import ncl
from nodeutils import *

PointersTable = None

def buildPointersTable(alldecls, allfuncs):
    print "Building pointers table..."
    global PointersTable
    PointersTable = dict()
    # prefill pointers table so that we can search for function names later
    for f in allfuncs:
        funcname = f
        PointersTable[funcname] = []
    print "Pointers table prefiled, entries: ", len(PointersTable)

    # now PointersTable has all the names of all functions

    # iterate over all declarations to find all references to the functions
    for thedecl in alldecls:
#	print "--> Searching pointers in", thedecl.spelling
        #function reference filter
        frf = lambda n: n.spelling in PointersTable and n.kind == CursorKind.DECL_REF_EXPR
        # first find all references to function names, then filter out those which are calls
        funcrefs = get_all_descendants(thedecl).filter(frf)
    	res = []
        # all calls in thedecl
        calls = get_all_descendants(thedecl).filter(lambda n: n.kind == CursorKind.CALL_EXPR)
        for ref in funcrefs:
            # if there is an call containing our reference
#            print "Investigating reference: ", ref.spelling
            if calls.any(lambda c: get_all_descendants(c).any(lambda e: e == ref)):
#		print "Found a call to", ref.spelling, "in", thedecl.spelling, "skipping"
                continue
            else:
                # no call contains our ref, so ref is a pointer to function in thedecl
#		print "Not found a call, listing in the PointersTable: ", ref.spelling, "pointed from", thedecl.spelling
                PointersTable[ref.spelling].append(thedecl)

def get_pointers(funcname):
    global PointersTable
    if PointersTable is None:
	raise "Pointers table has to be built first"
    if funcname in PointersTable:
        return PointersTable[funcname]
    else:
        return []

def takes_lock(func):
    return get_descendants(func, lambda node: node.spelling == "rw_enter_write").all_descendants().any(lambda n: n.spelling == "netlock")

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


