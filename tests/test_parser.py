from clan.clangparser import *
from testing import *

class TestParser(tc):
  #1
  def testPasrsing(self):
    parsed = parse('unittest/one.c')
    self.assertTrue(parsed.__class__ == clang.cindex.TranslationUnit)

  #2
  def testParseFolder(self):
    rdr()
    res = parse_folder('csourcelim')
    rdrstop()
    self.assertTrue('Progress: 5 / 5' in rdrval())
    self.assertTrue(len(res) == 5)

if  __name__ == '__main__':
    unittest.main()
