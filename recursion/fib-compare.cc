#include <iostream>
#include <cassert>
#include <ctime>
using namespace std;

int64_t fib(const int i)
{
  if (i == 0 || i == 1)
    return i;
  return(fib(i - 1) + fib(i - 2));
}
#define MAXN 100
int64_t fibLoop(const int n)
{
  if (n == 0 || n == 1)
    return n;
  int64_t fib[MAXN];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i <= n; i++)
    fib[i] = fib[i - 1] + fib[i - 2];
  return fib[n];
}
double clock2second(clock_t c)
{
  return c / (double)CLOCKS_PER_SEC;
}
int main(void)
{
  int n;
  cin >> n;
  assert(n > 0);
  clock_t start, elapsed;
  start = clock();
  int64_t x {fib(n)};
  elapsed = clock() - start;
  cout << "fib(" << n << ") = " << x <<" (" <<
    clock2second(elapsed) << " sec.)" << endl;
  start = clock();
  int64_t y {fibLoop(n)};
  elapsed = clock() - start;
  cout << "fib(" << n << ") = " << y <<" (" <<
    clock2second(elapsed) << " sec.)" << endl;
  return 0;
}
