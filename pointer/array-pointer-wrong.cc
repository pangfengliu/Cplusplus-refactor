#include <iostream> 
using namespace std;

#define X 2
#define Y 3
#define Z 4

int main()
{
  int a[X][Y][Z];
  int *intPtr;
  int *arrayPtr[Z];
  int *matrixPtr[Y][Z];
  
  cout << "sizeof(intPtr) = " << sizeof(intPtr) << endl;
  cout << "sizeof(arrayPtr) = " << sizeof(arrayPtr) << endl;
  cout << "sizeof(matrixPtr) = " << sizeof(matrixPtr) << endl;
  return 0;
}
