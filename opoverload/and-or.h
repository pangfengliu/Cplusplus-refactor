#include "binary-tree.h"
using namespace pangfeng;

NodePtr operator|(const BinaryTree &s, const BinaryTree &t);
NodePtr operator&(const BinaryTree &s, const BinaryTree &t);
NodePtr treeAnd(ConstNodePtr &s, ConstNodePtr &t);
NodePtr treeOr(ConstNodePtr &s, ConstNodePtr &t);
