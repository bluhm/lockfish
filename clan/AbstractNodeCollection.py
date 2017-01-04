from utils import *

class AbstractNodeCollection:
  def pprint(self):
    for c in self:
      mpprint(c)
