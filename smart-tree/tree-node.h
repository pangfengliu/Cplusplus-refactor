#ifndef TREENODE
#define TREENODE
#include <iostream>
#include <memory>
using namespace std;

namespace pangfeng {
  class TreeNode;
  using NodePtr = unique_ptr<TreeNode>;
  using ConstNodePtr = const unique_ptr<TreeNode>;
  class TreeNode
  {
    int key;
    NodePtr left, right;
  public:
    TreeNode(int k, TreeNode *l = nullptr, TreeNode *r = nullptr):
      key(k), left(l), right(r) {}
    ~TreeNode() {cout << "~TreeNode " << key << endl;}
    int getKey()  const {return key;};
    NodePtr &getL() {return left;};
    NodePtr &getR() {return right;};
    void print() const {cout << key << ' ';};
  };
}
#endif
