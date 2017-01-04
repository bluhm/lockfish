from clan.nc import nc
from testing import *
from clan.clangparser import *

rdr()
res = parse_folder('../csourcelim')
rdrstop()
rdrv=rdrval()

r2=[r.cursor for r in res]
restus=res
res=r2

#Testing node collection
class TestNC(tc):
  #1
  def testPreps(self):
    global res
    global rdrv
    self.assertTrue('Progress: 5 / 5' in rdrv)
    self.assertTrue(len(restus) == 5)

  #2
  def testNCInit(self):
    global res
    c1 = nc(res)
    self.assertTrue(c1.l == res)


if  __name__ == '__main__':
    unittest.main()
