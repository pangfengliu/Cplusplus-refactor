#include <iostream>
using namespace std;
#define ARRAYSIZE 10

main()
{
  int a[ARRAYSIZE];
  cout << sizeof(a[0]) << endl;
  cout << sizeof(a) << endl;
  for (int i = 0; i < ARRAYSIZE; i++)
    cout << &(a[i]) << endl;
}
