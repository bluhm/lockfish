from utils import *
from AbstractNodeCollection import *

#to be deleted
def mget_all_descendants(node):
    if node is None:
        return []
    res = []
    for c in node.get_children():
        res = res + [c] + mget_all_descendants(c)
    return res


class nc(AbstractNodeCollection):
  """    A node collection class
  """
  def __init__(self, lst):
    if type(lst) is list:
      self.l = lst
    elif lst.__class__ is nc:
      self.l = lst.l[:]
    else:
      try:
        self.l = list(lst)
      except:
        raise Exception("Can't create a nc from: ", lst)

  def __add__(self, other):
    if type(other) is list:
      return nc(self.l + other)
    elif other.__class__ is nc:
      return nc(self.l + other.l)
    return None

  def all_descendants(self):
    res = nc([])
    for n in self.l:
      res.extend(mget_all_descendants(n))
    return res


  def extend(self, other):
    if type(other) is list:
      self.l.extend(other)
    elif other.__class__ is nc:
      self.l.extend(other.l)
    else:
      raise "Extend does not work with", type(other)

  def count(self):
    return self.__len__()

  def __len__(self):
    return len(self.l)

  def __str__(self):
    return str(self.l)

  def __getitem__(self, key):
    return self.l[key]

  def __iter__(self):
    return self.l.__iter__()

  def filter(self, f):
    res=[]
    for a in self.l:
      if f(a):
        res.append(a)
    return nc(res)

  def any(self, f):
    for a in self.l:
      if f(a):
        return True
    return False

  def append(self, node):
    self.l.append(node)



