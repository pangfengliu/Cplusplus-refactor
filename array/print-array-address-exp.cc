#include <iostream>
using namespace std;
#define ARRAYSIZE 10

main()
{
  int a[ARRAYSIZE];
  cout << "&a is " << &a << endl;
  cout << "a is " << a << endl;
  cout << "&(a[0]) is " << &(a[0]) << endl;
  cout << "a + 3 is " << a + 3 << endl;
  cout << "&(a[3]) is " << &(a[3]) << endl;
}
