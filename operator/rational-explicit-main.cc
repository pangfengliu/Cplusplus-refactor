#include <iostream>
using namespace std;
#include "rational-explicit.h"

Rational two(void)
{
  return Rational(2);  // return 2;
}
int main()
{
  Rational a(3);
  a.print("a = ");
  Rational b {a + Rational(3)};  // Rational b {a + 3};
  b.print("b = ");
  Rational c {two()};
  c.print("c = ");
  if (c < Rational(7))  // if (c < 7)
    cout << "c < 7" << endl;
  else
    cout << "c >= 7" << endl;
  return 0;
}
