#include "binary-tree.h"
using namespace pangfeng;

class AndOrTree: public BinaryTree
{
  NodePtr treeAnd
    (ConstNodePtr &s, ConstNodePtr &t) const;
  NodePtr treeOr
    (ConstNodePtr &s, ConstNodePtr &t) const;
 public:
  AndOrTree(NodePtr node) {root = move(node);};
  ~AndOrTree() {cout << "~AndOrTree" << endl;};

  NodePtr binaryTreeAnd
    (const BinaryTree &t) const;
  NodePtr binaryTreeOr
    (const BinaryTree &t) const;
};
