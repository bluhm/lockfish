from AbstractNodeCollection import *

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
  def __init__(self, root, filters):
    self.stack = root[:]
    self.filters = filters

  def __iter__(self):
    return self

  def check(self, it):
    return allp(self.filters, it)

  def next(self):
    while len(self.stack) > 0:
      it = self.stack.pop()
      if self.check(it):
        return it
      self.stack.extend(it.get_children())
    raise StopIteration()



# node collection lazy
class ncl(AbstractNodeCollection):
  def __init__(self, root):
    if type(root) is list:
      self.root = root
    else:
      self.root = [root]
    self.filters = []

  def any(self, filter):
    fltrs = self.filters + [filter]
    return lazyanys(self.root, fltrs)

  def filter(self, filter):
    res = ncl(self.root)
    res.filters = self.filters + [filter]
    return res

  def __iter__(self):
    return MyIt(self.root, self.filters)

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

def get_all_descendants_lazy(node):
  return ncl(node)