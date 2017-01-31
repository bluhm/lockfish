import clang
from pprint import pprint
import os, sys, time

def mpprint(o, v = 1):
    if type(o) is clang.cindex.Cursor:
        if v == 1:
            print o.spelling
        if v >= 2:
            print o.spelling, get_info(o, v - 2)
    else:
        pprint(o)



# taken from python bindings examples


def get_info(node, depth=0):
    if depth == 0:
        children = None
    else:
        children = [get_info(c, depth-1)
                    for c in node.get_children()]
    return { 'spelling' : node.spelling,
             'kind' : node.kind,
             'usr' : node.get_usr(),
             'location' : node.location,
             'extent.start' : node.extent.start,
             'extent.end' : node.extent.end,
             'is_definition' : node.is_definition(),
             'children' : children }

def tostr(crs):
  return str(crs.spelling)

from clang.cindex import Cursor
Cursor.__str__ = tostr

def get_console_width():
  rows, columns = os.popen('stty size', 'r').read().split()
  return int(columns)

def get_filler():
  return ' ' * get_console_width()

def get_time():
  millis = int(round(time.time() * 1000))
  return millis

millis = get_time()
refresh = 600

def statusup(s, debug = False):
  if debug:
    print s
    return
    
  global millis
  global refresh

  t = get_time()
  if t - millis >= refresh:
    millis = t
    sys.stdout.write('\r' + get_filler())
    sys.stdout.write('\r' + (s+get_filler())[0:get_console_width()])
    sys.stdout.flush()

def statusend(s):
  sys.stdout.write('\r' + (s+get_filler())[0:get_console_width()] + '\r\n')
