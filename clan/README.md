In this folder all the interesting stuff happens.

# collections and lazy collections

nc.py is a definition of a node collection.
nv can be lazy to, ncl is described in the lazy.py.
After parsing clang gives you a collection of nodes.
Nc and ncl allow you query them and only when you access
the data the actual iteration is performed.

callgraph.py implements the caller graph. This graph is usually 
a tree. A loop would mean recursive implementations. They are
handled in the call graph too. After the callgraph has been built
you can pretty print call stacks and the graph too.


pointerutils collect pointers to functions. Sometimes functions are
called over pointers to them. So we track pointers as well in case 
you want to know more than the caller graph can tell you.


clangparser hides the parse folder functionality. You can also find 
parse file funtion there.

cg utils is a file describing a caller table building process. 
A caller table is built to make the caller graph building faster.
This optimization made sense in our case, because of the large 
code base for the analysis.


obsdanalysis is the place where OpenBSD kernel analysis is happening.
This is an orthogonal concern for the ground elements discussed above.
So you can use call graph and node collections even when you 
have nothing to do with OpenBSD kernel. It was our application only.

(C) Zaur Molotnikov. zmolo@genua.de
