#include <iostream>
using namespace std;
#include "rational-implicit.h"

int main()
{
  Rational a(5);
  a.print("a = ");
  Rational b {a + 3};
  b.print("b = ");
  if (b < 7)
    cout << "b < 7" << endl;
  else
    cout << "b >= 7" << endl;
  return 0;
}
