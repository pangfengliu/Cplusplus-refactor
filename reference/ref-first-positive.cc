#include <iostream> 
using namespace std;

int &firstPositive(int *ptr)
{
  while (*ptr <= 0)
    ptr++;
  return *ptr;
}
int main(void)
{
  int array[] {0, 0, 3, 0, 5, 0, 0, 10};
  int &iref {firstPositive(array)};
  cout << "iref = " << iref << endl;
  iref = 0;

  int i {firstPositive(array)};
  cout << "i = " << i << endl;
  i = 0;
  cout << "array[4] = " << array[4] << endl;

  i = firstPositive(array);
  cout << "i = " << i << endl;

  firstPositive(array) = 0;

  i = firstPositive(array);
  cout << "i = " << i << endl;
  iref = 7;

  i = firstPositive(array);
  cout << "i = " << i << endl;
  (*(&iref - 1))++;

  i = firstPositive(array);
  cout << "i = " << i << endl;
  return 0;
}
