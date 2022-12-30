#include "binary-tree.h"

namespace pangfeng {
  //--copy-tree--
  NodePtr copyTree(ConstNodePtr &source)
  {
    if (source == nullptr)
      return nullptr;
    NodePtr destination {new TreeNode(source->getKey())};
    destination->getL() = move(copyTree(source->getL()));
    destination->getR() = move(copyTree(source->getR()));
    return destination;
  }
  //--copy-tree-end--
  //--traverse--
  void BinaryTree::print(string msg) const
  {
    cout << msg << endl;
    preorder();
    cout << endl;
    inorder();
    cout << endl;
    postorder();
    cout << endl << endl;
  }
  void BinaryTree::pre(ConstNodePtr &node) const
  {
    if (node == nullptr)
      return;
    node->print();
    pre(node->getL());
    pre(node->getR());
  }
  void BinaryTree::in(ConstNodePtr &node) const
  {
    if (node == nullptr)
      return;
    in(node->getL());
    node->print();
    in(node->getR());
  }
  void BinaryTree::post(ConstNodePtr &node) const
  {
    if (node == nullptr)
      return;
    post(node->getL());
    post(node->getR());
    node->print();
  }
  //--find--
  bool BinaryTree::
  findTree(ConstNodePtr &ptr, int key) const
  {
    if (ptr == nullptr)
      return false;
    if (ptr->getKey() == key)
      return true;
    return (findTree(ptr->getL(), key) ||
	    findTree(ptr->getR(), key));
  }
  //--find-end--  
}
  
