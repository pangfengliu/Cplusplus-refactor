#include <algorithm>		// for find
#include <exception>		// for exeception 
#include "binary-tree.h"	// for BinaryTree
#include "read-vector.h"	// for readVector
using namespace pangfeng;	// for NodePtr

void readPreIn
(vector <int> &pre, vector <int> &in);
NodePtr buildBinaryTree
(vector <int> pre, vector <int> in);

