#include "binary-tree.h"

class AndOrTree: public BinaryTree
{
  NodePtr treeAnd
    (constNodePtr s, constNodePtr t) const;
  NodePtr treeOr
    (constNodePtr s, constNodePtr t) const;
 public:
  // move constructor
  AndOrTree(BinaryTree &&t) {
    root = t.getRoot();
    t.reset();
  };
  NodePtr binaryTreeAnd
    (const BinaryTree &t) const;
  NodePtr binaryTreeOr
    (const BinaryTree &t) const;
};
