#include "fib-reducer.h"

int main()
{
  FibReducer reducer;
  dfs(Fib(8), reducer);
  cout << reducer.getResult() << endl;
}
