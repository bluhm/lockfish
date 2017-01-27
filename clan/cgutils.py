from clang.cindex import CursorKind
from nodeutils import get_all_descendants

def add_to_caller_table(called, caller, CallerTable):
  if not called.spelling in CallerTable:
    CallerTable[called.spelling] = []
  if not caller in CallerTable[called.spelling]:
    CallerTable[called.spelling].append(caller)

def build_caller_table(alldecls, detectors=[]):
  CallerTable = dict()
  for f in alldecls:
    for call in get_all_descendants(f).filter(lambda n: n.kind == CursorKind.CALL_EXPR):
      add_to_caller_table(call, f, CallerTable)

    for dt in detectors:
      lst = dt.detect(f)
      for call in lst:
        add_to_caller_table(call, f, CallerTable)

  return CallerTable


def get_callers(funcname, CallerTable):
  if funcname in CallerTable:
    return CallerTable[funcname]
  else:
    return []


