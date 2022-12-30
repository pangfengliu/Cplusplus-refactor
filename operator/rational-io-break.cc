#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "rational-io.h"

int main()
{
  Rational r;
  try {
    while (cin >> r)
      cout << r << endl;
  } catch (exception &e) {
    cout << "exception caught, e.what() = " << e.what() << endl;
  }
  return 0;
}
 
