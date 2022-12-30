#include <iostream>
#include <cassert>
using namespace std;

long long int fib(const int i)
{
  return (i == 0 || i == 1)? i : fib(i - 1) + fib(i - 2);
}
int main(void)
{
  int n;
  cin >> n;
  assert(n > 0);
  cout << "fib(" << n << ") = " << fib(n) << endl;
  return 0;
}
