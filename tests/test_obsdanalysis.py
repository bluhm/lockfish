from lockfish.obsdanalysis import *
from lockfish.clangparser import *
from lockfish.lazy import *
from clang.cindex import CursorKind
from lockfish.cgutils import *

from testing import *

rdr()
tus = parse_folder('takes_lock_c', '.c')
rdrstop()
rdrv=rdrval()

cursors = get_cursors(tus) # iterable cursors
contents = ncl(cursors) # wrapped in a lazy collection for performance

allfuncs = contents.ofkind(CursorKind.FUNCTION_DECL).shallow().maxdepth(1)
rootname = 'a'

rdr()
callertable = build_caller_table_obsd(allfuncs)
cg = build_call_graph(callertable, allfuncs, rootname, maxdepth = 20)
rdrstop()

#Testing node collection
class TestObsdAnalysis(tc):

  #1
  def testPreps(self):
    self.assertTrue('Done' in rdrv)
    self.assertTrue(len(tus) == 1) # one file
    self.assertTrue(len(allfuncs.tonc()) == 6) # six functions total

  #2
  def testCallerTable(self):
    self.assertTrue(len(callertable) == 3)
    self.assertTrue(len(callertable['a']) == 2)
    self.assertTrue(callertable['a'][0].spelling == "b")
    self.assertTrue(callertable['a'][1].spelling == "c")
    self.assertTrue(len(callertable['_rw_enter_write']) == 1)
    self.assertTrue(callertable['_rw_enter_write'][0].spelling == "c")

  #3
  def testCallGraph(self):
    expected = \
""" |- a
    |- b
    |- c\n"""
    rdr()
    cg.pprint()
    rdrstop()
    self.assertTrue(expected == rdrval())

  #4
  def testLockAnalysis(self):
    rdr()
    lock_analysis(cg)
    rdrstop()
    expected="""No lock: [a, b]\n"""
    self.assertTrue(expected == rdrval())

  #5
  def testPointerAnalysis(self):
     v = GetNodesForPointerAnalysisVisitor()
     cg.acceptVisitor(v)
     self.assertTrue(len(v.names) == 2)
     self.assertTrue('a' in v.names)
     self.assertTrue('b' in v.names)
     rdr()
     pointer_analysis(v.names, contents)
     rdrstop()
     expected = """Pointers table:  {'a': ['pointer'], 'b': ['pointer']}
a pointed from: ['pointer']
b pointed from: ['pointer']"""
     v = rdrval()
     self.assertTrue(expected in v)
     self.assertTrue(v.count('pointed') == 2)

if  __name__ == '__main__':
    unittest.main()

code = """

void a(){

}

int netlock;

void _rw_enter_write(int n){
}

void c(){
 a();
 _rw_enter_write(netlock);
}


void b(){
 a();
}

void pointer(){
 a;
 b;
 c;
}

"""
