#ifndef BINARYTREE
#define BINARYTREE
#include "tree-node.h"

namespace pangfeng {
  NodePtr copyTree(constNodePtr root);

  class BinaryTree
  {
  private:
    void pre(NodePtr node) const;
    void in(NodePtr node) const;
    void post(NodePtr node) const;
    void deleteTree(NodePtr node);
    bool findTree(NodePtr ptr, int key) const;
  protected:
    NodePtr root;
  public:
  BinaryTree(NodePtr r = nullptr): root(r) {};
    ~BinaryTree();
    NodePtr getRoot() const {return root;};
    void preorder() const {pre(root);};
    void inorder() const {in(root);};
    void postorder() const {post(root);};
    void print(string msg) const;
    bool find(int key) const
    {return findTree(root, key);};
  };
}
#endif
