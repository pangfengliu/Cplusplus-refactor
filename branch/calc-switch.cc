#include <iostream>
using namespace std;
main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  switch (c) {
  case 0:
    d = a + b;    break;
  case 1:
    d = a - b;    break;
  case 2:
    d = a * b;    break;
  case 3:
    d = a / b;    break;
  case 4:
    d = a % b;    break;
  default:
    d = 0;
  }
  cout << d << endl;
}

