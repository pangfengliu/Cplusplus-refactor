#include <iostream> 
using namespace std;

#define ARRAYSIZE 5

int main(void)
{
  int a[ARRAYSIZE];
  for (int i = 0; i < ARRAYSIZE; i++)
    cin >> a[i];

  int *ptr {a};
  for (int i = 0; i < ARRAYSIZE; i++, ptr++) {
    cout << ptr << endl;
    *ptr += 3;
  }
  
  for (int i = 0; i < ARRAYSIZE; i++) 
    cout << "a[" << i << "] = " << a[i] << endl;

  return 0;
}
