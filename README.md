![Logo](https://raw.githubusercontent.com/qutorial/lockfish/master/lockfish.svg.png)


# Lockfish is a library for simple syntactic analysis of C programs in Python

It is based on clang.

Lockfish enables C parsing and syntactic analysis through tree traversal based on clang
python bindings.

Additionally we solve here locking problems in OpenBSD kernel by building caller graph and detecting the absent locks which have to be taken. You can use lockfish independently from OpenBSD completely.

Now we can build caller graphs, and call-stacks, search pointers to 
functions, perform simple syntactic requests to the abstract syntax tree.
All of it is based on lazy collections.

# Install

1. Install a virtualenv and create one with Python 2 
virtualenv --python=/path/to/python/2.7 ../env2

2. Install clang with python bindings

Correct then the activate.sh to point to the libs from it.

3. Activate the venv
. activate.sh

4. Install the requirements

(env2): $ pip install -r requirements.txt


you are good to go now, just run

buildcg.py config simple

to test it out.

Bash completion after you . activate.sh should help you out.


# Usage

## OpenBSD Kernel Analysis

It is done in buildcg.py 

(env2): $ buildcg.py roots functions to analyze

## Custom usage

See the tests and the buildcg.py file to get an idea on how to parse C and 
use nc (Node Collection) and ncl (Node Collection Lazy) classes to traverse the AST.

See CallGraph for the caller graph interface. It has a number of tree traversal 
features, can output call stacks, can pretty print itself.


# Unit tests

Are in the tests folder. Running them is as simple as:
(env2): $ cd tests
(env2): $ . run.sh

# Credits and Help Requests

Go to zmolo@ and bluhm@.
