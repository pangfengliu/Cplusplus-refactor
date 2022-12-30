#include "and-or-tree.h"

NodePtr AndOrTree::binaryTreeAnd(const BinaryTree &t) const
{
  return treeAnd(root, t.getRoot());
}
NodePtr AndOrTree::binaryTreeOr(const BinaryTree &t) const
{
  return treeOr(root, t.getRoot());
}
NodePtr AndOrTree::treeAnd(ConstNodePtr &s, ConstNodePtr &t) const
{
  if (s == nullptr || t == nullptr)
    return nullptr;
  NodePtr node {new TreeNode(s->getKey() * t->getKey())};
  node->getL() = move(treeAnd(s->getL(), t->getL()));
  node->getR() = move(treeAnd(s->getR(), t->getR()));
  return node;
}

NodePtr AndOrTree::treeOr(ConstNodePtr &s, ConstNodePtr &t) const
{
  if (s == nullptr && t == nullptr)
    return nullptr;
  if (s == nullptr) 
    return move(copyTree(t));
  if (t == nullptr) 
    return move(copyTree(s));
  NodePtr node {new TreeNode(s->getKey() + t->getKey())};
  node->getL() = move(treeOr(s->getL(), t->getL()));
  node->getR() = move(treeOr(s->getR(), t->getR()));
  return node;
}

