import clang
from clang.cindex import *
from utils import *

class nc:
  """    A node collection class
  """
  def __init__(self, lst):
    if type(lst) is list:
      self.l = lst
    else:
      raise Exception("Can't create a nc from: ", lst)

  def __add__(self, other):
    if type(other) is list:
      return nc(self.l + other)
    elif other.__class__ is nc:
      return nc(self.l + nc.l)
    return None

  def all_descendants_DEPR(self):
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

  def pprint(self):
    print "Collection: "
    for c in self.l:
      mpprint(c)

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




