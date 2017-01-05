from clang.cindex import CursorKind
from nodeutils import get_all_descendants

def build_caller_table(alldecls):
  CallerTable = dict()
  for f in alldecls:
    for call in get_all_descendants(f).filter(lambda n: n.kind == CursorKind.CALL_EXPR):
      if not call.spelling in CallerTable:
        CallerTable[call.spelling] = []
      if not f in CallerTable[call.spelling]:
        CallerTable[call.spelling].append(f)
  return CallerTable


def get_callers(funcname, CallerTable):
  if funcname in CallerTable:
    return CallerTable[funcname]
  else:
    return []


