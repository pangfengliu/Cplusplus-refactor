#include <iostream>
using namespace std;

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define MOD 4

int arithmetic(int opd1, int opd2, int opr)
{
  switch (opr) {
  case ADD:
    return (opd1 + opd2);
  case SUB:
    return (opd1 - opd2);
  case MUL:
    return (opd1 * opd2);
  case DIV:
    return (opd1 / opd2);
  case MOD:
    return (opd1 % opd2);
  default:
    cout << "invalid operator " << opr << endl;
    return 0;
  }
}

int main()
{
  int a, b, c;
  while (cin >> a >> b >> c)
    cout << arithmetic(a, b, c) << endl;
  return 0;
}
