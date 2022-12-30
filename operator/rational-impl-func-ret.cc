#include <iostream>
using namespace std;
#include "rational-implicit.h"

Rational two(void)
{
  return 2;
}
int main()
{
  Rational a {two()};
  a.print("a = ");
  return 0;
}
