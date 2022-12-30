#include "bst-and-or.h"
#include "read-vector.h"
using namespace pangfeng;

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
  BinaryTree u(move(s.binaryTreeOr(t)));
  BinaryTree v(move(s.binaryTreeAnd(t)));
  u.print("union u");
  v.print("intersection v");
  return 0;
}
