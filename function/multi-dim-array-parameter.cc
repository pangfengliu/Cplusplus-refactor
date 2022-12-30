#include <iostream>
#include <cassert>
using namespace std;

void printMatrix(int a[][4], int i, int j)
{
  cout << "a[" << i << "][" << "] = " << a[i][j] << endl;
}

int main(void)
{
  int array[3][4];
  for (int i = 0; i < 3; i++)			
    for (int j = 0; j < 4; j++)
      cin >> array[i][j];
  
  cout << "array[2][1] = " << array[2][1] << endl;
  printMatrix(array, 2, 1);
  cout << "array[0][2] = " << array[0][2] << endl;
  printMatrix(array, 0, 2);
  return 0;
}
