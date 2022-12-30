#include <iostream>
using namespace std;

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define MOD 4

main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  switch (c) {
  case ADD:
    d = a + b;    break;
  case SUB:
    d = a - b;    break;
  case MUL:
    d = a * b;    break;
  case DIV:
    d = a / b;    break;
  case MOD:
    d = a % b;    break;
  default:
    d = 0;
  }
  cout << d << endl;
}

