#include "btree-and-or.h"

namespace pangfeng {
  //--copy-tree--
  NodePtr copyTree(ConstNodePtr &source)
  {
    if (source == nullptr)
      return nullptr;
    NodePtr destination
      {new TreeNode(source->getKey())};
    destination->getL() =
      move(copyTree(source->getL()));
    destination->getR() =
      move(copyTree(source->getR()));
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
  NodePtr BinaryTree::binaryTreeAnd(const BinaryTree &t) const
  {
    return treeAnd(root, t.getRoot());
  }
  NodePtr BinaryTree::binaryTreeOr(const BinaryTree &t) const
  {
    return treeOr(root, t.getRoot());
  }
  NodePtr BinaryTree::
  treeAnd(ConstNodePtr &s, ConstNodePtr &t) const
  {
    if (s == nullptr || t == nullptr)
      return nullptr;
    NodePtr node {new TreeNode(s->getKey() * t->getKey())};
    node->getL() = move(treeAnd(s->getL(), t->getL()));
    node->getR() = move(treeAnd(s->getR(), t->getR()));
    return node;
  }
  NodePtr BinaryTree::
  treeOr(ConstNodePtr &s, ConstNodePtr &t) const
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
}
