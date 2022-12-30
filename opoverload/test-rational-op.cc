#include <iostream>
#include <cassert>
using namespace std;
#include "rational-op.h"

int main()
{
  Rational a(1, 2);
  Rational b(-1, -3);
  Rational c = a + b;

  c.print();
  cout << endl;
  if (b < a)
    cout << "b is smaller than a\n";
  return 0;
}
