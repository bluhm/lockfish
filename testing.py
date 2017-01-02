from cStringIO import StringIO
import sys

ostdout = sys.stdout

mystdout = None
def rdr():
  global mystdout
  mystdout = StringIO()
  sys.stdout = mystdout

def rdrstop():
  global ostdout
  sys.stdout = ostdout

def rdrval():
  global mystdout
  return mystdout.getvalue()


def test():
  rdr()
  print("Hello")
  rdrstop()
  print("""Should print "Hello\\n":""")
  print(rdrval())

if __name__ == '__main__':
  test()


import unittest
from unittest import TestCase as tc

class Empty:
  pass
