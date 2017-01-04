import clan.mydump
from clan.mydump import *
from testing import *

#test decls
rdr()
td = get_all_decls('unittest')
rdrstop()

class TestLazy(tc):

  #1
  def testPasrsing(self):
    call = td[2]
    self.assertTrue(call.spelling == 'b')

  #2
  def testInit(self):
    call = td[2]
    dg = get_all_descendants_lazy(call)
    self.assertTrue(dg.__class__ == DescendantGetter)

  #3
  def testFilter1(self):
    call = td[2]
    d = get_all_descendants_lazy(call)
    d = d.filter(lambda n: n.spelling == 'x')
    self.assertTrue(len(d.filters) == 1)

  #4
  def testAny1(self):
    call = td[2]
    d = get_all_descendants_lazy(call)
    d = d.filter(lambda n: n.spelling == 'x')
    self.assertTrue(d.any(lambda n: n.kind == CursorKind.DECL_REF_EXPR) == True)

  #5
  def testIter(self):
    call = td[2]
    d = get_all_descendants_lazy(call)
    d = d.filter(lambda n: n.spelling == 'x')
    i = 0
    for c in d:
      self.assertTrue(c.kind == CursorKind.UNEXPOSED_EXPR or c.kind == CursorKind.PARM_DECL)
      i+=1
    self.assertTrue(i==2)

if  __name__ == '__main__':
    unittest.main()
