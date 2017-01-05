from clan.clangparser import *
from clan.utils import *
from testing import *

class TestUtils(tc):
  #1
  def testGetInfo(self):
    parsed = parse('unittest/one.c')
    for c in parsed.cursor.get_children():
      self.assertTrue('one.c' in str(get_info(c)['location']))
  #2
  def testMPPrint(self):
    parsed = parse('unittest/one.c')
    for c in parsed.cursor.get_children():
      rdr()
      mpprint(c)
      rdrstop()
      v = rdrval()
      self.assertTrue('FUNCTION_DECL' in v)

if  __name__ == '__main__':
    unittest.main()
