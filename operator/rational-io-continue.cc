#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "rational-io.h"

int main()
{
  Rational r;
  while (!cin.eof()) {
    try {
      cin >> r;
      if (!cin.eof())
	cout << r << endl;
    } catch (exception &e) {
      cout << "more exceptions caught, e.what() = "
	   << e.what() << endl;
    }
  }
  return 0;
}
 
