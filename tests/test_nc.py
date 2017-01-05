from clan.nc import nc
from testing import *
from clan.clangparser import *

rdr()
res = parse_folder('csourcelim', '.c')
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

  #3
  def testNCAddAppendIndexPlusLenInit(self):
    global res
    c1 = nc([])
    c1.append(res[0])
    c2 = nc([])
    c2.append(res[1])
    c3 = c1 + c2
    self.assertTrue(c3[0] == res[0])
    self.assertTrue(c3[1] == res[1])
    self.assertTrue(len(c3) == 2)
    self.assertTrue(c3.count() == 2)
    i = 0
    for n in c3:
      self.assertTrue(n == res[i])
      i = i + 1
    rdr()
    c3.pprint()
    rdrstop()
    self.assertTrue("sys_socket.c" in rdrval())

    c4=nc(c3)
    for n in c4:
      self.assertTrue(n in c3)

if  __name__ == '__main__':
    unittest.main()
