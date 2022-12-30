#include <iostream> 
using namespace std;

#define ARRAYSIZE 5

int main(void)
{
  int a[ARRAYSIZE];
  for (int i = 0; i < ARRAYSIZE; i++)
    cin >> a[i];

  int *ptr {a};
  for (int i = 0; i < 2; i++)
    ptr[i] += 3;
  for (int i = 0; i < ARRAYSIZE; i++) 
    cout << "a[" << i << "] = " << a[i] << endl;
  cout << endl;

  ptr = &(a[2]);
  for (int i = 0; i < 2; i++)
    ptr[i] += 3;
  for (int i = 0; i < ARRAYSIZE; i++) 
    cout << "a[" << i << "] = " << a[i] << endl;
  return 0;
}
