#include <iostream> 
using namespace std;

int *firstPositive(int *ptr)
{
  while (*ptr <= 0)
    ptr++;
  return ptr;
}

#define ARRAYSIZE 10

int main(void)
{
  int array[ARRAYSIZE];
  for (int i = 0; i < ARRAYSIZE; i++)
    cin >> array[i];
  
  int *iptr {firstPositive(array)};
  cout << "*iptr = " << *iptr << endl;
  cout << "iptr - array = " << iptr - array << endl;

  iptr = firstPositive(&(array[5]));
  cout << "*iptr = " << *iptr << endl;
  cout << "iptr - array = " << iptr - array << endl;
  return 0;
}
