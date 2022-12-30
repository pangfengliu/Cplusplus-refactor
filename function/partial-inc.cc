#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
  for (int i = 0; i < n; i++)
    cout << "a[" << i << "] = "
	 << array[i] << endl;
  return;
}

void incArray(int array[], int n)
{
  cout << "incArray: array = "
       << array << endl;
  for (int i = 0; i < n; i++)
    array[i]++;
  return;
}

#define ASIZE 5

int main(void)
{
  int a[ASIZE];
  for (int i = 0; i < ASIZE; i++)
    cin >> a[i];

  cout << "before incArray" << endl;
  printArray(a, ASIZE);

  incArray(a, ASIZE);
  cout << "after first incArray" << endl;
  printArray(a, ASIZE);

  incArray(&(a[1]), 2);
  cout << "after second incArray" << endl;
  printArray(a, 5);

  incArray(&(a[2]), 2);
  cout << "after second incArray" << endl;
  printArray(a, ASIZE);
  return 0;
}
