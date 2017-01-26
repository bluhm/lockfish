from clang.cindex import CursorKind
from nodeutils import get_all_descendants

# finds pointers to functions in other declarations
# all decls - nodes to search in
# all funcs - strings, names of functions to search the pointers to
def build_pointers_table(alldecls, allfuncs):
  PointersTable = dict()
  # prefill pointers table so that we can search for function names later
  for f in allfuncs:
    funcname = f
    PointersTable[funcname] = []

  # now PointersTable has all the names of all functions

  # iterate over all declarations to find all references to the functions
  for thedecl in alldecls:
    # function reference filter, selects only refs to interesting functions
    frf = lambda n: n.kind == CursorKind.DECL_REF_EXPR and n.spelling in PointersTable
    # first find all references to function names, then filter out those which are calls
    funcrefs = get_all_descendants(thedecl).filter(frf)
    res = []
    # all calls in thedecl
    calls = get_all_descendants(thedecl).filter(lambda n: n.kind == CursorKind.CALL_EXPR)
    for ref in funcrefs:
      # if there is a call containing our reference
      if calls.any(lambda c: get_all_descendants(c).any(lambda e: e == ref)):
        continue
      else:
        # no call contains our ref, so ref is a pointer to function in thedecl
        if len(thedecl.spelling) > 0 and not thedecl.spelling in PointersTable[ref.spelling]:
          PointersTable[ref.spelling].append(thedecl.spelling)
          break
  return PointersTable

# returns functions which point to this one
def get_pointers(funcname, PointersTable):
  if funcname in PointersTable:
    return PointersTable[funcname]
  else:
    return []

