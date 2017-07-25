![Logo](https://raw.githubusercontent.com/qutorial/lockfish/master/lockfish.svg.png)


# Lockfish is a library for simple syntactic analysis of C programs in Python

It is based on clang.

Lockfish enables C parsing and syntactic analysis through tree traversal based on clang
python bindings.

Additionally we solve here locking problems in OpenBSD kernel by building caller graph and detecting the absent locks which have to be taken. You can use lockfish independently from OpenBSD completely.

Now we can build caller graphs, and call-stacks, search pointers to 
functions, perform simple syntactic requests to the abstract syntax tree.
All of it is based on lazy collections.

You can use this work to quickly build your own checks on the C code of your 
choice. 

# Examples

We will work on this code:

```
$ cat tests/takes_lock_c/main.c

void a(){
}

int netlock;

void _rw_enter_write(int n){
}

void _rw_exit_write(int n){
}

void c(){
 _rw_enter_write(netlock);
 a();
 _rw_exit_write(netlock);
}


void b(){
 a();
}

void pointer(){
 a;
 b;
 c;
}
```



# Example 1. Parse some C, do simple queries.


```
$ cd tests

$ python
# now in Python interpreter
from lockfish.clangparser import *
from lockfish.lazy import *
from clang.cindex import CursorKind

# Parse all C files in a folder of your choice
tus =  parse_folder("some c folder, ext = ".c")
cursors = get_cursors(tus)
contents = ncl(cursors)

# get all functions quickly
allfuncs = contents.ofkind(CursorKind.FUNCTION_DECL)


# print their names
for node in allfuncs:
  node.spelling

'pointer'
'b'
'c'
'_rw_exit_write'
'_rw_enter_write'
'a'

# find those which have long names

allfuncs.any(lambda f: len(f.spelling)>10)
True

# Find those with their locations:

for func in allfuncs.filter(lambda f: len(f.spelling)>10):
  print func.spelling, func.location

_rw_exit_write <SourceLocation file './takes_lock_c/main.c', line 9, column 6>
_rw_enter_write <SourceLocation file './takes_lock_c/main.c', line 6, column 6>

```

# Example 2. Build a caller table (it will use knowledge of OpenBSD kernel)

```
# Based on the first example:
from lockfish.cgutils import *
callertable = build_caller_table(allfuncs)

Building ct[0], processing function #0: pointer
 - Done


# let's print it now

for func, callers in callertable.items():
  print func, 'is called by', map(lambda x: x.spelling, callers)

a is called by ['b', 'c']
_rw_enter_write is called by ['c']
_rw_exit_write is called by ['c'] 
```

# Example 3. Build a call graph.

```
# Based on the second example, build caller graph for a()
from lockfish.obsdanalysis import *
cg = build_call_graph(callertable, allfuncs, "a")

Searching for the root function...
New caller added: b at depth: 2

# and print it.
cg.pprint()

 |- a
    |- b
    |- c


```

- will build the graph of functions calls starting from a(), in reversed order, a is called by b and c here.



# Install

1. Install a virtualenv and create one with Python 2
```sudo apt install virtualenv```

 
```virtualenv --python=`which python2.7` ../env2```

2. Install clang with python bindings

We used clang 3.8. Newer version exist, but we haven't tested 
lockfish with them yet, although, we expect it to work just fine.

```sudo apt install clang-3.8```

Correct then the activate.sh to point to the libs from it.

In our case it shall be like this:
```
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib/llvm-3.8/lib/
```

Change to this directory and make sure that libclang.so is there.
Create a symbolic link to it, if there is no libclang.so.

```
cd /us/lib/llvm-3.8/lib/
ls libclang.so # Does it find something? If not:
sudo ln -s libclang.so.1 libclang.so
```

3. Activate the venv

```. activate.sh```

4. Install the requirements

```
(env2): $ pip install -r requirements.txt
```

you are good to go now, just run

```buildcg.py config simple```

to test it out.

Bash completion after you `. activate.sh` should help you out to type the command.


Example output:


```
Taking config:  simple
Parsing in tests/simple_c
 - Done

Building caller table...
 - Done

 ############# ANALYSIS FOR A #############   

Building caller graph for a
Searching for the root function...
Done

Caller graph:
 |- a
    |- c

Analyzing locks:
No lock: [a, c]
Done

Analyzing pointers:
Building pointers table...
 - Done
Pointers table:  {'a': ['funcsarray', 'd', 'b'], 'c': ['funcsarray']}
a pointed from: ['funcsarray', 'd', 'b']
c pointed from: ['funcsarray']
Done
```

# Usage

## OpenBSD Kernel Analysis

It is done in buildcg.py 

```
(env2): $ buildcg.py roots functions to analyze
```

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

Go to zmolo@genua.de and bluhm@genua.de.
