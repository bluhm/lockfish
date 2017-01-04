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

class DescendantGetter:
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
    res = DescendantGetter(self.root)
    res.filters = self.filters + [filter]
    return res

  def __iter__(self):
    return MyIt(self.root, self.filters)




def get_all_descendants_lazy(node):
  return DescendantGetter(node)
