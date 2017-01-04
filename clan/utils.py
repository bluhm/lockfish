import clang
from pprint import pprint

def mpprint(o):
    if type(o) is clang.cindex.Cursor:
        print "<",o.kind,", '", o.spelling,"' >"
    else:
        pprint(o)
