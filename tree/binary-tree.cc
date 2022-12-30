#include "binary-tree.h"

namespace pangfeng {
  //--copy-tree--
  NodePtr copyTree(constNodePtr root)
  {
    if (root == nullptr)
      return nullptr;
    return new TreeNode(root->getKey(),
			copyTree(root->getL()),
			copyTree(root->getR()));
  }
  //--copy-tree-end--
  //--destructor--
  BinaryTree::~BinaryTree()
  {
    if (root != nullptr) {
      deleteTree(root);
      cout << endl;
    }
  }
  void BinaryTree::deleteTree(NodePtr node)
  {
    if (node == nullptr)
      return;
    deleteTree(node->getL());
    deleteTree(node->getR());
    cout << "delete " << node->getKey() << endl;
    delete node;
  }
  //--destructor-end--
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
  void BinaryTree::pre(NodePtr node) const
  {
    if (node == nullptr)
      return;
    node->print();
    pre(node->getL());
    pre(node->getR());
  }
  void BinaryTree::in(NodePtr node) const
  {
    if (node == nullptr)
      return;
    in(node->getL());
    node->print();
    in(node->getR());
  }
  void BinaryTree::post(NodePtr node)
    const
  {
    if (node == nullptr)
      return;
    post(node->getL());
    post(node->getR());
    node->print();
  }
  //--find--
  bool BinaryTree::findTree(NodePtr ptr, int key)
    const
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
  
