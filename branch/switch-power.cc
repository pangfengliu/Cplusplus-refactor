#include <iostream>
using namespace std;

main()
{
  int base, power, exponent;
  cin >> exponent >> base;
  switch (exponent) {
  case 1:
    power = base;
    break;
  case 2:
    power = base * base;
    break;
  case 3:
    power = base * base * base;
    break;
  default:
    power = 0;
  }
  cout << power << endl;
}
