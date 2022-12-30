#include "binary-search-tree.h"
#include "rebuild-tree.h"
#include "and-or.h"
#include "read-vector.h"

int main()
{
  vector <int> spre, sin;
  readPreIn(spre, sin);
  BinaryTree s(buildBinaryTree(spre, sin));
  vector <int> tpre, tin;
  readPreIn(tpre, tin);
  BinaryTree t(buildBinaryTree(tpre, tin));
  s.print("s");
  t.print("t");

  BinaryTree u(s | t);
  BinaryTree v(s & t);
  u.print("union u");
  v.print("intersection v");
  BinaryTree w(s | (u & v));
  w.print("w");
  return 0;
}
