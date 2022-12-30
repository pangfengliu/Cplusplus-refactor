#include <vector>
#include "btree-and-or.h"

namespace pangfeng {
  class BinarySearchTree: public BinaryTree
  {
  private:
    NodePtr insertTree(NodePtr node, int key);
    bool findTree(NodePtr ptr, int key) const;
  public:
    BinarySearchTree(vector <int> keys);
    bool find(int key) const
    {return findTree(root, key);};
  };
}
