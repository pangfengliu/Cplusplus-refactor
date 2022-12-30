#include <iostream>
#include <cassert>
using namespace std;
#include "rational.h"

int main()
{
  Rational a(1, 2);
  Rational b(-1, -3);
  Rational c = a.add(b);

  c.print();
  cout << endl;
  if (b.smaller(a))
    cout << "b is smaller than a\n";
  return 0;
}
