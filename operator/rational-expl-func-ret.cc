#include <iostream>
using namespace std;
#include "rational-explicit.h"

Rational two(void)
{
  return Rational(2);  // return 2;
}
int main()
{
  Rational a {two()};
  a.print("a = ");
  return 0;
}
