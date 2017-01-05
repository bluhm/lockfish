from nc import *
from lazy import *

def get_descendant(node, filter):
  if node is None:
      return None
  else:
    if filter(node):
      return node
    for c in node.get_children():
      res = get_descendant(c, filter)
      if res is not None:
        return res
    return None

def mget_descendants(node, filter):
  if node is None:
    return []
  if filter(node):
    res = [node]
  else:
    res = []
  for c in node.get_children():
    res = res + mget_descendants(c, filter)
  return res

def mget_all_descendants(node):
  if node is None:
    return []
  res = []
  for c in node.get_children():
    res = res + [c] + mget_all_descendants(c)
  return res

def get_descendants(node, fltr):
  return nc(mget_descendants(node, fltr))
#  return get_all_descendants_lazy(node).filter(fltr)

def get_all_descendants(node):
  return get_all_descendants_lazy(node)
#  return nc(mget_all_descendants(node))

def get_all_descendants_lazy(node):
  return ncl(node)
