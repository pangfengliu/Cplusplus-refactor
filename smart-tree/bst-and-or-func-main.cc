#include "binary-search-tree.h"
#include "and-or-func.h"
#include "read-vector.h"

int main()
{
  vector <int> skeys, tkeys;
  int n;
  cin >> n;
  readVector(n, skeys);
  cin >> n;
  readVector(n, tkeys);
  BinarySearchTree s(skeys);
  BinarySearchTree t(tkeys);
  s.print("binary search tree s");
  t.print("binary search tree t");
  BinaryTree u(treeOr(s.getRoot(), t.getRoot()));
  BinaryTree v(treeAnd(s.getRoot(), t.getRoot()));
  u.print("union u");
  v.print("intersection v");
  return 0;
}
