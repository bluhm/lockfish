from AbstractNodeCollection import *
from nc import nc

def allp(preds, x):
  for p in preds:
    if not p(x):
      return False
  return True

def anyp(preds, x):
  for p in preds:
    if p(x):
      return True
  return false

def lazyany(node, preds):
  if node is None:
    return False
  if allp(preds, node):
    return True
  for c in node.get_children():
    if lazyany(c, preds):
        return True
  return False

def lazyanys(nodes, preds):
  for n in nodes:
    if lazyany(n, preds):
      return True
  return False

class MyIt():
  def __init__(self, root, filters, shallow):
    self.stack = root[:]
    self.filters = filters
    self.shallow = shallow

  def __iter__(self):
    return self

  def check(self, it):
    return allp(self.filters, it)

  def next(self):
    while len(self.stack) > 0:
      it = self.stack.pop()
      check = self.check(it)
      if (self.shallow and not check) or not self.shallow:
        self.stack.extend(list(it.get_children()))
      if check:
        return it
    raise StopIteration()



# node collection lazy
class ncl(AbstractNodeCollection):
  def __init__(self, root):
    self.filters = []
    self.mshallow = False
    if type(root) is list:
      self.root = root
    elif root.__class__ is ncl:
      self.root = root.root[:]
      self.filters = root.filters[:]
      self.mshallow = root.mshallow
    else: # try converting iterables
      self.root = [root]

  def any(self, filter):
    fltrs = self.filters + [filter]
    return lazyanys(self.root, fltrs)

  def filter(self, filter):
    res = ncl(self.root)
    res.filters = self.filters + [filter]
    return res

  def __iter__(self):
    return MyIt(self.root, self.filters, self.mshallow)

  def __add__(self, other):
    if type(other) is list:
      raise Exception("Can't add ncl to a list")
    elif other.__class__ is nc:
      raise Exception("Can't add ncl to an nc")
    elif other.__class__ is ncl:
      return ncl(self.root + ncl.root)
    else:
      raise Exception("Do not know how to add ncl to " + other)

  def tonc(self):
    l = []
    for n in self:
      l.append(n)
    return nc(l)

  def all_descendants(self):
    return self

  def shallow(self):
    # deep copy
    res = ncl(self)
    res.mshallow = True
    return res

  def extend(self, other):
    if type(other) is list:
      raise Exception("Can't extend ncl with a list")
    elif other.__class__ is nc:
      raise Exception("Can't extend ncl with an nc")
    elif other.__class__ is ncl:
      self.root.extend(other.root)
    else:
      raise Exception("Do not know how to extend ncl with " + other)

  def addroots(self, other):
    if type(other) is list:
      self.root.extend(other)
    elif other.__class__ is nc:
      self.root.extend(other.l)
    elif other.__class__ is ncl:
      self.root.extend(other.root)
    else:
      raise Exception("Do not know how to add roots from " + other)

  def addroot(self, n):
    self.root.append(n)
