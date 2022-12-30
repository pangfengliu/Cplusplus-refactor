#include <iostream> 
using namespace std;

#define X 2
#define Y 3
#define Z 4

int main()
{
  int a[X][Y][Z];
  auto intPtr {a[0][0]};
  auto arrayPtr {a[0]};
  auto matrixPtr {a};
  
  cout << "sizeof(intPtr) = " << sizeof(intPtr) << endl;
  cout << "sizeof(arrayPtr) = " << sizeof(arrayPtr) << endl;
  cout << "sizeof(matrixPtr) = " << sizeof(matrixPtr) << endl;

  cout << "intPtr + 1 = " << intPtr + 1 << endl;
  cout << "a[0][0] + 1 = " << a[0][0] + 1 << endl;
  cout << "&(a[0][0][0]) + 1 = " << &(a[0][0][0]) + 1 << endl;
  cout << "&(a[0][0][1]) = " << &(a[0][0][1]) << endl;

  cout << "arrayPtr + 1 = " << arrayPtr + 1 << endl;
  cout << "a[0] + 1 = " << a[0] + 1 << endl;
  cout << "a[0][1] " << a[0][1] << endl;
  cout << "a[0][0] + 4 = " << a[0][0] + 4 << endl;
  cout << "&(a[0][0][0]) + 4 = " << &(a[0][0][0]) + 4 << endl;
  cout << "&(a[0][1][0]) = " << &(a[0][1][0])
       << endl;

  cout << "matrixPtr + 1 = " << matrixPtr + 1 << endl;
  cout << "a + 1 = " << a + 1 << endl;
  cout << "a[1] = " << a[1] << endl;
  cout << "a[0] + 3 = " << a[0] + 3 << endl;
  cout << "a[0][0] + 12 = " << a[0][0] + 12 << endl;
  cout << "&(a[0][0][0]) + 12 = " << &(a[0][0][0]) + 12 << endl;
  cout << "&(a[1][0][0]) = " << &(a[1][0][0]) << endl;
  return 0;
}
