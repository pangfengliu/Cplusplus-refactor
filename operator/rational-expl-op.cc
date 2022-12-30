#include <iostream>
using namespace std;
#include "rational-explicit.h"

int main()
{
  Rational a(5);
  a.print("a = ");
  Rational b {a + Rational(3)};   // Rational b {a + 3};
  b.print("b = ");
  if (b < Rational(7))   // if (b < 7)
    cout << "b < 7" << endl;
  else
    cout << "b >= 7" << endl;
  return 0;
}
