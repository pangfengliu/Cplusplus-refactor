#include <vector>
#include "binary-tree.h"

namespace pangfeng {
  class BinarySearchTree: public BinaryTree
  {
  private:
    void insertTree(NodePtr &node, int key);
    bool findTree(ConstNodePtr &ptr, int key)const;
  public:
    BinarySearchTree(vector <int> keys);
    ~BinarySearchTree()
    {cout << "~BinarySearchTree" << endl;};
    bool find(int key) const
    {return findTree(root, key);};
  };
}
