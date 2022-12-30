#include "hanoi-reducer.h"

int main()
{
  MoveReducer reducer;
  dfs(MoveStones(4, "A", "C", "B"), reducer);
  cout << reducer.getResult() << endl;
}
