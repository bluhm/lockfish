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
        print "<", o.kind, ", '", o.spelling, "'>"
    else:
        pprint(o)

class nc:
    """    A node collection class
    """
    def __init__(self):
        self.l = []

    def __init__(self, lst):
        self.l = lst

    def __str__(self):
        return str(self.l)

    def __getitem__(self, key):
        return self.l[key]

    def pprint(self):
        print "Collection: "
        for c in self.l:
            mpprint(c)



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

def get_descendants(node, filter):
    if node is None:
        return []
    if filter(node):
        res = [node]
    else:
        res = []
    for c in node.get_children():
        res = res + get_descendants(c, filter)
    return res

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



def main():
    from clang.cindex import Index
    from clang.cindex import CursorKind
    from pprint import pprint

    from optparse import OptionParser, OptionGroup

    global opts

    parser = OptionParser("usage: %prog [options] {filename} [clang-args*]")
    parser.add_option("", "--show-ids", dest="showIDs",
                      help="Compute cursor IDs (very slow)",
                      action="store_true", default=False)
    parser.add_option("", "--max-depth", dest="maxDepth",
                      help="Limit cursor expansion to depth N",
                      metavar="N", type=int, default=None)
    parser.disable_interspersed_args()
    (opts, args) = parser.parse_args()

    if len(args) == 0:
        parser.error('invalid number arguments')

    index = Index.create()
    tu = index.parse(None, args)
    if not tu:
        parser.error("unable to load input")

#    pprint(('diags', map(get_diag_info, tu.diagnostics)))
#    pprint(('nodes', get_info(tu.cursor)))
    funcname = "if_linkstate_task"
    ourfunc = get_descendant(tu.cursor, lambda node: node.kind == CursorKind.FUNCTION_DECL and node.spelling == funcname)
    pprint(get_info(ourfunc, 0))

    decls = get_descendants(tu.cursor, lambda node: node.kind == CursorKind.FUNCTION_DECL)
    decls = nc(decls)
    print "Total function declarations: "
    decls.pprint()

if __name__ == '__main__':
    main()


