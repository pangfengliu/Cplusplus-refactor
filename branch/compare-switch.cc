#include <iostream>
using namespace std;

#define EQL 5
#define NOTEQL 6
#define SMALLER 7
#define LARGER 8
#define SMALLEREQL 9
#define LARGEREQL 10

main()
{
  int a, b, c;
  cin >> a >> b >> c;
  bool d;
  switch (c) {
  case EQL:
    d = (a == b); break;
  case NOTEQL:
    d = (a != b); break;
  case SMALLER:
    d = (a < b); break;
  case LARGER:
    d = (a > b); break;
  case SMALLEREQL:
    d = (a <= b); break;
  case LARGEREQL:
    d = (a >= b); break;
  default:
    d = false;
  }
  cout << d << endl;
}
