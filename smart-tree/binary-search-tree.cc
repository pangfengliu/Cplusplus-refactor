#include "binary-search-tree.h"
using namespace pangfeng;

//--constructor--
BinarySearchTree::
BinarySearchTree(vector <int> keys): BinaryTree(nullptr)
{
  for (auto key : keys)
    insertTree(root, key);
}
//--insertTree--
void BinarySearchTree::insertTree(NodePtr &node, int key)
{
  if (node == nullptr) {
    NodePtr keyNode {new TreeNode(key)};
    node = move(keyNode);
    return;
  } 
  if (key < node->getKey())
    insertTree(node->getL(), key);
  else
    insertTree(node->getR(), key);
}
//--findTree--
bool BinarySearchTree::findTree(ConstNodePtr &ptr, int key) const
{
  if (ptr == nullptr)
    return false;
  if (key == ptr->getKey())
    return true;
  else if (key < ptr->getKey())
    return findTree(ptr->getL(), key);
  else 
    return findTree(ptr->getR(), key);
}
//--end--

