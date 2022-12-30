#include "and-or-tree.h"
#include "rebuild-tree.h"
#include "read-vector.h"

int main()
{
  vector <int> spre, sin;
  readPreIn(spre, sin);
  AndOrTree s(buildBinaryTree(spre, sin));
  vector <int> tpre, tin;
  readPreIn(tpre, tin);
  AndOrTree t(buildBinaryTree(tpre, tin));
  s.print("s");
  t.print("t");
  AndOrTree u(s.binaryTreeOr(t));
  AndOrTree v(s.binaryTreeAnd(t));
  u.print("union u");
  v.print("intersection v");
  return 0;
}
