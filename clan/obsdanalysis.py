from nodeutils import *

def takes_lock(func):
  return get_descendants(func, lambda node: node.spelling == "rw_enter_write").all_descendants().any(lambda n: n.spelling == "netlock")
