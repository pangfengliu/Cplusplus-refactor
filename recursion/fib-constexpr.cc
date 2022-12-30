#include <iostream>
#include <cassert>
#include <ctime>
using namespace std;

constexpr int64_t fib(const int i)
{
  return((i == 0 || i == 1)? i : fib(i - 1) + fib(i - 2));
}
double clock2second(clock_t c)
{
  return c / (double)CLOCKS_PER_SEC;
}
int main(void)
{
  clock_t start, elapsed;
  start = clock();
  int64_t x {fib(45)};
  elapsed = clock() - start;
  cout << "fib(45) = " << x << " (" <<
    clock2second(elapsed) << " sec.)" << endl;
  const int fortyFive {45};
  start = clock();
  int64_t y {fib(fortyFive)};
  elapsed = clock() - start;
  cout << "fib(45) = " << y << " (" <<
    clock2second(elapsed) << " sec.)" << endl;
  int notSure {45};
  start = clock();
  int64_t z {fib(notSure)};
  elapsed = clock() - start;
  cout << "fib(45) = " << z << " (" <<
    clock2second(elapsed) << " sec.)" << endl;
  int n;
  cin >> n;
  assert(n > 0);
  start = clock();
  int64_t w {fib(n)};
  elapsed = clock() - start;
  cout << "fib(" << n << ") = " << w << " (" <<
    clock2second(elapsed) << " sec.)" << endl;
  return 0;
}
