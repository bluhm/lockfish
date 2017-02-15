from cStringIO import StringIO
import sys

ostdout = sys.stdout
ostderr = sys.stderr

mystdout = None
mystderr = None

def rdr():
  global mystdout
  global mystderr
  mystdout = StringIO()
  mystderr = StringIO()
  sys.stdout = mystdout
  sys.stderr = mystderr

def rdrstop():
  global ostdout
  global ostderr
  sys.stdout = ostdout
  sys.stderr = ostderr

def rdrval():
  global mystdout
  global mystderr
  return mystdout.getvalue() + mystderr.getvalue()


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
