#include "bst-and-or.h"
using namespace pangfeng;

//--constructor--
BinarySearchTree::BinarySearchTree
(vector <int> keys)
{
  root = nullptr;
  for (auto key : keys)
    root = insertTree(root, key);
}
//--insertTree--
NodePtr BinarySearchTree::insertTree
(NodePtr node, int key)
{
  if (node == nullptr)
    return new TreeNode(key, nullptr, nullptr);

  if (key < node->getKey())
    node->setLeft
      (insertTree(node->getL(), key));
  else
    node->setRight
      (insertTree(node->getR(), key));
  return node;
}
//--findTree--
bool BinarySearchTree::findTree
(NodePtr ptr, int key) const
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

