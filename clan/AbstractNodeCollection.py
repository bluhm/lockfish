from utils import *

class AbstractNodeCollection:
  def pprint(self):
    for c in self:
      mpprint(c)

  def spelled(self, s):
    """Filter nodes with spelling"""
    return self.filter(lambda n: n.spelling == s)

  def ofkind(self, k):
    """Filter nodes by kind"""
    return self.filter(lambda n: n.kind == k)

  def __str__(self):
    return '[' + ", ".join(map(str, self)) + ']'
