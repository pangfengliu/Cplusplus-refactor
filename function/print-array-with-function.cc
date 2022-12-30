#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
  cout << "array is at " << array << endl;
  for (int i = 0; i < n; i++)
    cout << "array[" << i << "] = "
	 << array[i] << endl;
  return;
} 

#define ASIZE 3
#define BSIZE 5

int main(void)
{
  int a[ASIZE];
  int b[BSIZE];

  cout << "main: a = " << a << endl;
  cout << "main: b = " << b << endl;

  for (int i = 0; i < ASIZE; i++)
    cin >> a[i];
  for (int i = 0; i < BSIZE; i++)
    cin >> b[i];

  printArray(a, ASIZE);
  printArray(b, BSIZE);
  return 0;
}
