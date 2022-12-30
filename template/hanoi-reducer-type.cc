#include "hanoi-reducer-type.h"

int main()
{
  MoveReducer reducer;
  dfs(MoveStones(4, "A", "C", "B"), reducer);
  vector<string> solution {reducer.getResult()};
  for (auto move : solution)
    cout << move;
  return 0;
}
