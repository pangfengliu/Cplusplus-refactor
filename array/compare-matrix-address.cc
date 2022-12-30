#include <iostream>
#include <iomanip>
using namespace std;

#define X 2
#define Y 3
#define Z 4

main()
{
  int a[X][Y][Z];
  cout << "a[0][0] + 1 = " << a[0][0] + 1 << endl;
  cout << "&(a[0][0][0]) + 1 = " << &(a[0][0][0]) + 1 << endl;
  cout << "&(a[0][0][1]) = " << &(a[0][0][1]) << endl << endl;
  cout << "a[0] + 1 = " << a[0] + 1 << endl;
  cout << "a[0][1] = " << a[0][1] << endl;
  cout << "a[0][0] + 4 = " << a[0][0] + 4 << endl;
  cout << "&(a[0][0][0]) + 4 = " << &(a[0][0][0]) + 4 << endl;
  cout << "&(a[0][1][0]) = " << &(a[0][1][0]) << endl << endl;
  cout << "a + 1 = " << a + 1 << endl;
  cout << "a[1] = " << a[1] << endl;
  cout << "a[0] + 3 = " << a[0] + 3 << endl;
  cout << "a[0][0] + 12 = " << a[0][0] + 12 << endl;
  cout << "&(a[0][0][0]) + 12 = " << &(a[0][0][0]) + 12 << endl;
  cout << "&(a[1][0][0]) = " << &(a[1][0][0]) << endl;
}
