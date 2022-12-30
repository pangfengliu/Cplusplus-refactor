#include "binary-tree.h"
using namespace pangfeng;

class AndOrTree: public BinaryTree
{
  NodePtr treeAnd
    (constNodePtr s, constNodePtr t) const;
  NodePtr treeOr
    (constNodePtr s, constNodePtr t) const;
 public:
  AndOrTree(NodePtr node) {root = node;};

  NodePtr binaryTreeAnd
    (const BinaryTree &t) const;
  NodePtr binaryTreeOr
    (const BinaryTree &t) const;
};
