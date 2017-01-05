import clang
from clang.cindex import *
from clang.cindex import CursorKind

def parse_args(args):
  index = Index.create()
  tu = index.parse(None, args)
  if not tu:
    parser.error("Parsing problem")
  return tu


def parse(filename):
  return parse_args([filename])

def parse_folder(path, ext='.c'):
  from os import listdir
  from os.path import isfile, join, splitext
  onlyfiles = [f for f in listdir(path) if isfile(join(path, f)) and splitext(f)[1] == ext]
  res = []
  i = 0
  for f in onlyfiles:
    print "Parsing", f
    tu = parse(join(path,f))
    res.append(tu)
    i = i + 1
    print "Progress:", i, "/", len(onlyfiles)
  return res

def get_cursors(tus):
  res = []
  for tu in tus:
    res.append(tu.cursor)
  return res
