#include "move-stones-dfs.h"

int main()
{
  int n;
  cin >> n;
  dfs(MoveStones(n, 'A', 'C', 'B'));
  return 0;
}
