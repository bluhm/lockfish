# Python Syntactic Analysis Framework for C based on clang

This is a work in progress library to enable syntactic analysis, tree traversal, searches on the clang cursors
produced by the Python clang bindings.

Additionally we solve here problems in OpenBSD kernel building caller graph and detecting locks.

# Install

1. Install a virtualenv and create one with Python 2 
virtualenv --python=/path/to/python/2.7 ../env2

2. Install clang with python bindings

Correct then the activate.sh to point to the libs from it.

3. Activate the venv
. activate.sh

4. Install the requirements

(env2): $ pip install -r requirements.txt


you are good to go now


# Usage

## OpenBSD Kernel Analysis

It is done in buildcg.py 
Configure there the root function in the main(), the entry point of the analysis, and the path: a folder where clang searches for the sources.
then just run it (from venv):

(env2): $ python buildcg.py

## Custom usage

See the mydump on how to use the Node Collection class, called nc. 
You can feed a number of nodes to it, Cursor nodes from clang python bindings, and then  nc gets searchable and filterable.

See callgraph for the call graph interface. It has a number of tree traversal features, can output call stacks, can print itself 
nicely.


# Unit tests

Are moved now out of the wat to the tests folder. They have to be fixed after this move to work again. 
Namely python imports should be fixed. 

Use them if you change the call graph or the mydump lazy collections.

# Credits and Help Requests

Go all to zmolo@

