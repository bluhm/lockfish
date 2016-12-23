#!/usr/bin/env python

#===- cindex-dump.py - cindex/Python Source Dump -------------*- python -*--===#
#
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
#
#===------------------------------------------------------------------------===#

"""
A simple command line tool for dumping a source file using the Clang Index
Library.
"""

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

    def extend(self, other):
        if type(other) is list:
            self.l.extend(other)
        elif other.__class__ is nc:
            self.l.extend(other.l)
        else:
            print "Extend does not work", type(other)

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




def get_ancestor(node, filter):
    while node is not None:
        node = node.lexical_parent
        if node is not None:
            if filter(node):
                return node
    return None

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
    return nc(mget_all_descendants(node))

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

def main():
    global opts

    mypath = 'csource'
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
        print "Total declarations: ", len(alldecls)
        i+=1
        print "Progress:", i, "/", len(onlyfiles)



#    pprint(('diags', map(get_diag_info, tu.diagnostics)))
#    pprint(('nodes', get_info(tu.cursor)))

    funcname = "if_linkstate"

#    ourfunc = get_descendant(tu.cursor, lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == funcname)
#    pprint(get_info(ourfunc, 0))

#    print "Any named: ", funcname, decls.any(lambda d: d.spelling == funcname)
    decls.filter(lambda f: get_all_descendants(f).any(lambda n: n.spelling == funcname)).pprint()
#    decls.filter(lambda n: n.spelling == funcname).pprint()

if __name__ == '__main__':
    main()


