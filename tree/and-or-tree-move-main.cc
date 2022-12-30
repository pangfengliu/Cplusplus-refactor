#include "and-or-tree-move.h"
#include "rebuild-tree.h"
#include "read-vector.h"

int main()
{
  vector <int> spre, sin;
  readPreIn(spre, sin);
  AndOrTree
    s(std::move(buildBinaryTree(spre, sin)));

  vector <int> tpre, tin;
  readPreIn(tpre, tin);
  AndOrTree
    t(std::move(buildBinaryTree(tpre, tin)));

  s.print("s");
  t.print("t");

  AndOrTree u(std::move(s.binaryTreeOr(t)));
  AndOrTree v(std::move(s.binaryTreeAnd(t)));

  u.print("union u");
  v.print("intersection v");

  return 0;
}
