#include <iostream>
using namespace std;

#define X 2
#define Y 3
#define Z 4
main()
{
  int a[X][Y][Z];
  cout << "size of a[0][0][0] = " << sizeof(a[0][0][0]) << endl;
  cout << "size of a[0][0] = " << sizeof(a[0][0]) << endl;
  cout << "size of a[0] = " << sizeof(a[0]) << endl;
  cout << "size of a = " << sizeof(a) << endl;
}
