#ifndef TREENODE
#define TREENODE
#include <iostream>
using namespace std;

namespace pangfeng {
  class TreeNode;
  using NodePtr = TreeNode*;
  using constNodePtr = const TreeNode*;

  class TreeNode
  {
    int key;
    NodePtr left, right;
  public:
  TreeNode(int k, NodePtr l, NodePtr r)
    : key(k), left(l), right(r) {};
    int getKey()  const {return key;};
    NodePtr getL() const {return left;};
    NodePtr getR() const {return right;};
    void setLeft(NodePtr l) {left = l;};
    void setRight(NodePtr r) {right = r;};
    void print()  const {cout << key << ' ';};
  };
}
#endif
