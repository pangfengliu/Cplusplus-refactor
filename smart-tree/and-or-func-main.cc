#include "rebuild-tree.h"
#include "and-or-func.h"
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
  BinaryTree u(treeOr(s.getRoot(), t.getRoot()));
  BinaryTree v(treeAnd(s.getRoot(), t.getRoot()));
  u.print("union u");
  v.print("intersection v");
  return 0;
}
