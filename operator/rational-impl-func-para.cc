#include <iostream>
using namespace std;
#include "rational-implicit.h"

Rational square(Rational a)
{
  return a * a;
}
int main()
{
  Rational a(square(5));
  a.print("a = ");
  return 0;
}
