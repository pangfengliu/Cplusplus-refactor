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
  Rational c = a + b;
  c.print("a + b = ");
  c = a - b;
  c.print("a - b = ");
  c = a * b;
  c.print("a * b = ");
  c = a / b;
  c.print("a / b = ");
  c = a + b * a;
  c.print("a + b * a = ");
  return 0;
}
 
