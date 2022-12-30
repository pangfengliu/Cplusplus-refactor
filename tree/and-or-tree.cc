#include "and-or-tree.h"

NodePtr AndOrTree::binaryTreeAnd
(const BinaryTree &t) const
{
  return treeAnd(root, t.getRoot());
}

NodePtr AndOrTree::binaryTreeOr
(const BinaryTree &t) const
{
  return treeOr(root, t.getRoot());
}

NodePtr AndOrTree::treeAnd
(constNodePtr s, constNodePtr t) const
{
  if (s == nullptr || t == nullptr)
    return nullptr;
  return
    new
    TreeNode(s->getKey() * t->getKey(),
	     treeAnd(s->getL(), t->getL()),
	     treeAnd(s->getR(), t->getR()));
}

NodePtr AndOrTree::treeOr
(constNodePtr s, constNodePtr t) const
{
  if (s != nullptr && t != nullptr)
    return
      new
      TreeNode(s->getKey() + t->getKey(),
	       treeOr(s->getL(), t->getL()),
	       treeOr(s->getR(), t->getR()));
  if (s != nullptr)
    return copyTree(s);
  else if (t != nullptr)
    return copyTree(t);
  return nullptr;
}

