#include "and-or-func.h"

NodePtr treeAnd
(constNodePtr s, constNodePtr t)
{
  if (s == nullptr || t == nullptr)
    return nullptr;
  return new
    TreeNode(s->getKey() * t->getKey(),
	     treeAnd(s->getL(), t->getL()),
	     treeAnd(s->getR(), t->getR()));
}

NodePtr treeOr
(constNodePtr s, constNodePtr t)
{
  if (s != nullptr && t != nullptr)
    return new
      TreeNode(s->getKey() + t->getKey(),
	       treeOr(s->getL(), t->getL()),
	       treeOr(s->getR(), t->getR()));
  if (s != nullptr) {
    return copyTree(s);
  } else if (t != nullptr) {
    return copyTree(t);
  }
  return nullptr;
}

