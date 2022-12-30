#include "binary-tree.h"
#include <vector>

class PreInTree: public BinaryTree
{
  NodePtr buildTree
    (vector <int> pre, vector <int> in);
 public:
 PreInTree(vector <int> pre, vector <int> in)
  {root = buildTree(pre, in);};
};

void readPreIn
(vector <int> &pre, vector <int> &in);
