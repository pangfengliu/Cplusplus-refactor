#include "fib-dfs.h"

int main()
{
  int n;
  cin >> n;
  dfs(Fib(n));
  cout << Fib::getSum() << endl;
  return 0;
}
