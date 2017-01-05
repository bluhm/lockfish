from clang.cindex import CursorKind
from nodeutils import get_all_descendants

# finds pointers to functions in other functions
def build_pointers_table(alldecls, allfuncs):
    print "Building pointers table..."
    PointersTable = dict()
    # prefill pointers table so that we can search for function names later
    for f in allfuncs:
        funcname = f
        PointersTable[funcname] = []
    print "Pointers table built"

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
    return PointersTable

# returns functions which point to this one
def get_pointers(funcname, PointersTable):
    if funcname in PointersTable:
        return PointersTable[funcname]
    else:
        return []

