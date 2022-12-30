#ifndef BINARYTREE
#define BINARYTREE
#include "tree-node.h"

namespace pangfeng {
  NodePtr copyTree(ConstNodePtr &source);

  class BinaryTree
  {
  private:
    NodePtr treeAnd(ConstNodePtr &s, ConstNodePtr &t) const;
    NodePtr treeOr(ConstNodePtr &s, ConstNodePtr &t) const;
    void pre(ConstNodePtr &node) const;
    void in(ConstNodePtr &node) const;
    void post(ConstNodePtr &node) const;
    bool findTree(ConstNodePtr &ptr, int key) const;
  protected:
    NodePtr root;
  public:
    BinaryTree() {};
    BinaryTree(TreeNode *r): root(r) {};
    BinaryTree(NodePtr r): root(move(r)) {};
    ~BinaryTree() {cout << "~BinaryTree" << endl;};
    ConstNodePtr &getRoot() const {return root;};
    void preorder() const {pre(root);};
    void inorder() const {in(root);};
    void postorder() const {post(root);};
    void print(string msg) const;
    bool find(int key) const {return findTree(root, key);};
    NodePtr binaryTreeAnd(const BinaryTree &t) const;
    NodePtr binaryTreeOr(const BinaryTree &t) const;
  };
}
#endif
