#!python
import clang
import clang.cindex
from clang import *
from clang.cindex import *



def mpprint(o):
    from pprint import pprint
    if type(o) is clang.cindex.Cursor:
        print "<",o.kind,", '", o.spelling,"' >"
    else:
        pprint(o)

class nc:
    """    A node collection class
    """
    def __init__(self, lst):
        if type(lst) is list:
            self.l = lst
        elif type(lst) is clang.cindex.Cursor:
            self.l = []
            for n in lst:
                self.l.append(n)

    def __add__(self, other):
        if type(other) is list:
            return nc(self.l + other)
        elif other.__class__ is nc:
            return nc(self.l + nc.l)
        return None

    def all_descendants(self):
        res = nc([])
        for n in self.l:
            res.extend(mget_all_descendants(n))
        return res


    def extend(self, other):
        if type(other) is list:
            self.l.extend(other)
        elif other.__class__ is nc:
            self.l.extend(other.l)
        else:
            print "Extend does not work", type(other)

    def count(self):
        return self.__len__()

    def __len__(self):
        return len(self.l)

    def __str__(self):
        return str(self.l)

    def __getitem__(self, key):
        return self.l[key]

    def pprint(self):
        print "Collection: "
        for c in self.l:
            mpprint(c)

    def filter(self, f):
        res=[]
        for a in self.l:
            if f(a):
                res.append(a)
        return nc(res)

    def any(self, f):
        for a in self.l:
            if f(a):
                return True
        return False




# Broken
#def get_ancestor(node, filter):
#    while node is not None:
#        node = node.lexical_parent
#        if node is not None:
#            if filter(node):
#                return node
#    return None

def allp(preds, x):
    for p in preds:
        if not p(x):
            return False
    return True

def anyp(preds, x):
    for p in preds:
        if p(x):
            return True
    return false

def lazyany(node, preds):
    if node is None:
        return False
    if allp(preds, node):
        return True
    for c in node.get_children():
        if lazyany(c, preds):
            return True
    return False


class MyIt():
    def __init__(self, root, filters):
        self.stack = [root]
        self.filters = filters

    def __iter__(self):
        return self

    def check(self, it):
        return allp(self.filters, it)

    def next(self):
        while len(self.stack) > 0:
            it = self.stack.pop()
            if self.check(it):
                return it
            self.stack.extend(it.get_children())
        raise StopIteration()

class DescendantGetter:
    def __init__(self, root):
        self.root = root
        self.filters = []

    def any(self, filter):
        fltrs = self.filters + [filter]
        return lazyany(self.root, fltrs)

    def filter(self, filter):
        res = DescendantGetter(self.root)
        res.filters = self.filters + [filter]
        return res

    def __iter__(self):
        return MyIt(self.root, self.filters)




def get_all_descendants_lazy(node):
    return DescendantGetter(node)

def get_descendant(node, filter):
    if node is None:
        return None
    else:
        if filter(node):
            return node
        for c in node.get_children():
            res = get_descendant(c, filter)
            if res is not None:
                return res
        return None

def mget_descendants(node, filter):
    if node is None:
        return []
    if filter(node):
        res = [node]
    else:
        res = []
    for c in node.get_children():
        res = res + mget_descendants(c, filter)
    return res

def mget_all_descendants(node):
    if node is None:
        return []
    res = []
    for c in node.get_children():
        res = res + [c] + mget_all_descendants(c)
    return res

def get_descendants(node, filter):
    return nc(mget_descendants(node, filter))


def get_all_descendants(node):
    return get_all_descendants_lazy(node)
#    return nc(mget_all_descendants(node))

def get_diag_info(diag):
    return { 'severity' : diag.severity,
             'location' : diag.location,
             'spelling' : diag.spelling,
             'ranges' : diag.ranges,
             'fixits' : diag.fixits }

def get_cursor_id(cursor, cursor_list = []):
    if not opts.showIDs:
        return None

    if cursor is None:
        return None

    # FIXME: This is really slow. It would be nice if the index API exposed
    # something that let us hash cursors.
    for i,c in enumerate(cursor_list):
        if cursor == c:
            return i
    cursor_list.append(cursor)
    return len(cursor_list) - 1

def get_info(node, depth=0):
    if opts.maxDepth is not None and depth >= opts.maxDepth:
        children = None
    else:
        children = [get_info(c, depth+1)
                    for c in node.get_children()]
    return { 'id' : get_cursor_id(node),
             'kind' : node.kind,
             'usr' : node.get_usr(),
             'spelling' : node.spelling,
             'location' : node.location,
             'extent.start' : node.extent.start,
             'extent.end' : node.extent.end,
             'is_definition' : node.is_definition(),
             'definition id' : get_cursor_id(node.get_definition()),
             'children' : children }


def parse_file_args(args):
    index = Index.create()

    tu = index.parse(None, args)
    if not tu:
        parser.error("unable to load input")
    return tu


def parse_file(filename):
    return parse_file_args([filename])

from clang.cindex import Index
from clang.cindex import CursorKind
from pprint import pprint


CallerTable = None
def buildCallerTable(alldecls):
    print "Building caller table..."
    global CallerTable
    CallerTable = dict()
    for f in alldecls:
        for call in get_all_descendants(f).filter(lambda n: n.kind == CursorKind.CALL_EXPR):
            if not call.spelling in CallerTable:
                CallerTable[call.spelling] = []
            if not f in CallerTable[call.spelling]:
                CallerTable[call.spelling].append(f)
    print "Caller table built"


def get_callers(funcname, alldecls):
    global CallerTable
    if CallerTable is None:
        buildCallerTable(alldecls)
    if funcname in CallerTable:
        return CallerTable[funcname]
    else:
        return []
#    return alldecls.filter(lambda f: get_all_descendants(f).any(lambda n: n.spelling == funcname and n.kind == CursorKind.CALL_EXPR))


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

def get_all_decls(mypath):
    from os import listdir
    from os.path import isfile, join
    onlyfiles = [f for f in listdir(mypath) if isfile(join(mypath, f))]

    alldecls=nc([])

    i = 0
    for f in onlyfiles:
        print "Parsing",f
        tu = parse_file(join(mypath,f))
        decls = get_descendants(tu.cursor, lambda node: node.kind == CursorKind.FUNCTION_DECL)
        print "Imported declarations:", len(decls)
        alldecls.extend(decls)
	del decls
	del tu
        print "Total declarations: ", len(alldecls)
        i+=1
        print "Progress:", i, "/", len(onlyfiles)

    return alldecls

def main():
    mypath = 'csourcelim'
    alldecls = get_all_decls(mypath)

    funcname = "if_linkstate"

    locking = "if_linkstate_task"

    fs = alldecls.filter(lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == locking)
    fs.pprint()
    for f in fs:
	print "Takes lock", takes_lock(f)


    analysis(funcname, alldecls)




#    pprint(('diags', map(get_diag_info, tu.diagnostics)))
#    pprint(('nodes', get_info(tu.cursor)))

#    pprint(get_info(ourfunc, 0))

#    print "Any named: ", funcname, decls.any(lambda d: d.spelling == funcname)


#    decls.filter(lambda n: n.spelling == funcname).pprint()

if __name__ == '__main__':
    main()


