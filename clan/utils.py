import clang
from pprint import pprint

def mpprint(o):
    if type(o) is clang.cindex.Cursor:
        print "<",o.kind,", '", o.spelling,"' >"
    else:
        pprint(o)



# taken from python bindings examples


def get_info(node, depth=0):
    if depth == 0:
        children = None
    else:
        children = [get_info(c, depth-1)
                    for c in node.get_children()]
    return { 'kind' : node.kind,
             'usr' : node.get_usr(),
             'spelling' : node.spelling,
             'location' : node.location,
             'extent.start' : node.extent.start,
             'extent.end' : node.extent.end,
             'is_definition' : node.is_definition(),
             'children' : children }

