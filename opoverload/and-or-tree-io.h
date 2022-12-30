#include "and-or-tree.h"

class AndOrTreeIO: public AndOrTree
{
 public:
 AndOrTreeIO(vector <int> keys = vector <int>()):
  AndOrTree(keys) {};
  BinaryTree operator*(BinaryTree &t)
    {return treeAnd(t.getRoot());};
  BinaryTree operator+(BinaryTree &t)
  {return treeOr(t.getRoot());};
  friend istream &operator>>(istream &in, AndOrTreeIO &a);
};
