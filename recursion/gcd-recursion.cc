#include <iostream>
#include <cassert>
using namespace std;

int gcd(const int i, const int j)
{
  cout << "gcd(" << i << "," << j << ") = ";
  int k {i % j};
  if (k == 0)
    return(j);
  return(gcd(j, k));
}
int main(void)
{
  int i, j;
  cin >> i >> j;
  assert(i >= j && j > 0);
  cout << gcd(i, j) << endl;
  return 0;
}
