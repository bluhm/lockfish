from callgraph import *
from testing import *

def getEmptyNode():
  return Node()

def getNamedNode(name):
  n = getEmptyNode()
  n.node = Empty()
  n.node.spelling = name
  return n

def getSampleGraph():
  n1 = getNamedNode("root")
  n2 = getNamedNode("c2")
  n3 = getNamedNode("c3")
  n4 = getNamedNode("c4")
  n5 = getNamedNode("c4")
  n2.addChild(n4)
  n1.addChild(n2)
  n1.addChild(n3)
  n3.addChild(n5)
  cg = CallGraph()
  cg.root = n1
  return cg

class TestCallGraph(tc):

  #1
  def testInit(self):
    n = getEmptyNode()
    self.assertTrue(n.node is None)

  #2
  def testPprintNode(self):
    n = getEmptyNode()
    rdr()
    n.pprint()
    rdrstop()
    self.assertTrue(rdrval().startswith("None"))

    n = getNamedNode("Hello")
    rdr()
    n.pprint()
    rdrstop()
    self.assertTrue(rdrval().startswith("Hello"))

  #3
  def testEq(self):
    n1 = getNamedNode("test")
    n2 = getNamedNode("test")
    n3 = getNamedNode("test1")

    self.assertTrue(n1 == n2)
    self.assertFalse(n1 == n3)
    self.assertTrue(n1 != n2)

  #4
  def testPprintCG(self):
    cg = getSampleGraph()
    rdr()
    cg.pprint()
    rdrstop()
    self.assertTrue("c4" in rdrval())

  #5
  def testFindByName(self):
    cg = getSampleGraph()
    self.assertTrue(cg.findByName("root") == getNamedNode("root"))
    self.assertTrue(cg.findByName("c2") == getNamedNode("c2"))
    self.assertTrue(cg.findByName("c3") == getNamedNode("c3"))
    self.assertTrue(cg.findByName("c4") == getNamedNode("c4"))
    self.assertTrue(cg.findByName("non existent") is None)

  #6
  def testFindShallow(self):
    cg = getSampleGraph()
    self.assertTrue(cg.findByNameShallow("root") == getNamedNode("root"))
    self.assertTrue(cg.findByNameShallow("c2") == getNamedNode("c2"))
    self.assertTrue(cg.findByNameShallow("c3") == getNamedNode("c3"))
    self.assertTrue(cg.findByNameShallow("c4") == getNamedNode("c4"))
    self.assertTrue(cg.findByNameShallow("non existent") is None)

  #7
  def testFindFilter(self):
    cg = getSampleGraph()
    self.assertTrue(cg.findFilter(lambda n: n == getNamedNode("c4")))

  #8
  def testFind(self):
    cg = getSampleGraph()
    # exact match, not by name, should fail
    self.assertTrue(cg.find(getNamedNode("c4")) is None)

  #9
  def testGetPossiblePath(self):
    cg = getSampleGraph()
    self.assertTrue([cg.root] == cg.getPossiblePath(cg.root))
    c = cg.root.children[0].children[0]
    self.assertTrue([cg.root, cg.root.children[0], cg.root.children[0].children[0]] == cg.getPossiblePath(c))

  #10
  def testGetStack(self):
    cg = getSampleGraph()
    c = cg.root.children[0].children[0]
    self.assertTrue([cg.root, cg.root.children[0], cg.root.children[0].children[0]] == c.getStack())

  #11
  def testAddCall(self):
    n1 = getNamedNode("root")
    cg = CallGraph()
    cg.root = n1
    n2 = getNamedNode("n2")
    self.assertTrue(cg.addCall(n1, n2))
    #not adding the same call twice
    self.assertFalse(cg.addCall(n1, n2))
    n3 = getNamedNode("n3")
    #adding to non existent caller
    self.assertFalse(cg.addCall(n3, n2))
    #adding in the right way
    self.assertTrue(cg.addCall(n2, n3))
    #trying to add a loop
    newroot = getNamedNode("root")
    self.assertTrue(cg.addCall(n3, newroot))
    # new root should be marked as recursed
    self.assertTrue(newroot.recursed)
    #trying to add a loop again!
    newroot2 = getNamedNode("root")
    self.assertFalse(cg.addCall(newroot, newroot2))
    # trying to add a duplicate call
    self.assertFalse(cg.addCall(newroot, n3))

  #12
  def testFindAll(self):
    cg = getSampleGraph()
    self.assertTrue(len(cg.findAllFilter(lambda n: True )) == 5)
    self.assertTrue(len(cg.findAllFilter(lambda n: n.spell() == "root" )) == 1)

  #13
  def testLeaves(self):
    cg = getSampleGraph()
    self.assertTrue(len(cg.getLeaves()) == 2)

  #14
  def testVisitor(self):
    cg = getSampleGraph()
    visitor = GetAllNamesVisitor()
    cg.acceptVisitor(visitor)
    self.assertTrue('c2' in visitor.names)
    self.assertTrue('root' in visitor.names)
    self.assertTrue('c3' in visitor.names)
    self.assertTrue('c4' in visitor.names)
    self.assertTrue(len(visitor.names) == 4)

  #15
  def testAllNames(self):
    self.assertTrue(len(getSampleGraph().getAllNames()) == 4)


if __name__ == '__main__':
    unittest.main()
