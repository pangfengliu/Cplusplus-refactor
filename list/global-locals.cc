#include <iostream>
using namespace std;

int i;

void foo(void)
{
  i++;
  cout << "foo: i = " << i << endl;
}
int main()
{
  int i = 10;
  foo();
  if (i == 10) {
    int i {20};
    cout << "within if i = " << i << endl;
  }
  cout << "within main: i = " << i << endl;
  return 0;
}
