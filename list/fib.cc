#include "stack.h"

int fib(int n)
{
  Stack fibStack;
  fibStack.push(n);
  int sum {0};
  while (!fibStack.empty()) {
    int m = fibStack.pop();
    if (m <= 1)
      sum += m;
    else {
      fibStack.push(m - 2);
      fibStack.push(m - 1);
    }
  }
  return sum;
}
int main()
{
  int n;
  cin >> n;
  for (int i = 2; i < n; i++)
    cout << "fib(" << i << ")=" << fib(i) << endl;
}
  
