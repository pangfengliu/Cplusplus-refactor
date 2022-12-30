#include <iostream>
using namespace std;

#define EQL 5
#define NOTEQL 6
#define SMALLER 7
#define LARGER 8
#define SMALLEREQL 9
#define LARGEREQL 10

bool compare(int opd1, int opd2, int opr)
{
  switch (opr) {
  case EQL:
    return (opd1 == opd2);
  case NOTEQL:
    return (opd1 != opd2);
  case SMALLER:
    return (opd1 < opd2);
  case LARGER:
    return (opd1 > opd2);
  case SMALLEREQL:
    return (opd1 <= opd2);
  case LARGEREQL:
    return (opd1 >= opd2);
  default:
    cout << "invalid operator " << opr << endl;
    return 0;
  }
}

int main()
{
  int a, b, c;
  while (cin >> a >> b >> c)
    cout << compare(a, b, c) << endl;
  return 0;
}
