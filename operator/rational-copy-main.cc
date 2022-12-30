#include <iostream>
using namespace std;
#include "rational.h"

Rational copy(Rational r)
{
  return r;
}
int main()
{
  int p, q;
  cin >> q >> p;
  Rational a(q, p);
  a.print("a = ");
  Rational b(3);
  b.print("b = ");
  Rational c {copy(a)};
  c.print("c = ");
  Rational d = 3;
  d.print("d = ");
  Rational e {Rational(3)};
  d.print("e = ");
  Rational f = Rational(3);
  f.print("f = ");
  Rational g(copy(a));
  g.print("g = ");
  return 0;
}
