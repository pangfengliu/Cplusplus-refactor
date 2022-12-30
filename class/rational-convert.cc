#include <iostream>
using namespace std;
#include "rational.h"

int main()
{
  int q;
  cin >> q;
  Rational a(q);
  a.print("a = ");
  Rational b {q + 1};
  b.print("b = ");
  return 0;
}
