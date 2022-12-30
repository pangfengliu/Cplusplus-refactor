#include "queen-reducer.h"

int main()
{
  QueensReducer queensReducer;
  dfs(Queens(6), queensReducer);
  for (auto solution: queensReducer.getResult()) {
    for (auto pos : solution)
      cout << pos;
    cout << endl;
  }
  return 0;
}
