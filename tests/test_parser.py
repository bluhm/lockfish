from clan.clangparser import *
from clang.cindex import Cursor
from testing import *

class TestParser(tc):
  #1
  def testPasrsing(self):
    parsed = parse('unittest/one.c')
    self.assertTrue(parsed.__class__ == clang.cindex.TranslationUnit)

  #2
  def testParseFolder(self):
    rdr()
    res = parse_folder('csourcelim', '.c')
    rdrstop()
    self.assertTrue('Done' in rdrval())
    self.assertTrue(len(res) == 5)
    cs = get_cursors(res)
    for c in cs:
      self.assertTrue(type(c) is clang.cindex.Cursor)

if  __name__ == '__main__':
    unittest.main()
