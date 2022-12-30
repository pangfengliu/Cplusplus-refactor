#include <iostream>
using namespace std;
#include "rational.h"

int main()
{
  int p, q;
  cin >> q >> p;
  Rational a(q, p);
  a.print("a = ");
  cin >> q >> p;
  Rational b(q, p);
  b.print("b = ");

  Rational c = a.add(b);
  c.print("a + b = ");
  c = a.sub(b);
  c.print("a - b = ");
  c = a.mul(b);
  c.print("a * b = ");
  c = a.div(b);
  c.print("a / b = ");
  return 0;
}
