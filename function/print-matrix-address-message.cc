#include <iostream>
using namespace std;

int main(void)
{
  int a[2][3][4];
  cout << "sizeof(a[0][0][0]) is "
       << sizeof(a[0][0][0]) << endl;
  cout << "sizeof(a[0][0]) is "
       << sizeof(a[0][0]) << endl;
  cout << "sizeof(a[0]) is "
       << sizeof(a[0]) << endl;
  cout << "sizeof(a) is " << sizeof(a)
       << endl;
  
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
      for (int k = 0; k < 4; k++)
	cout << "a[" << i << "][" << j
	     << "][" << k << " at "
	     << &(a[i][j][k]) << endl;
  for (int i = 0; i < 2; i++)
    cout << "address of a[" << i
	 << "][0] is " << &(a[i][0]) << endl;
  for (int i = 0; i < 2; i++)
    cout << "value of a[" << i
	 << "][0] is " << a[i][0] << endl;
  for (int i = 0; i < 2; i++)
    cout << "address of a[" << i << "] is "
	 << &(a[i]) << endl;
  for (int i = 0; i < 2; i++)
    cout << "value of a[" << i << "] is "
	 << a[i] << endl;
  cout << "address of a is " << &a << endl;
  cout << "value of a is " << a << endl;
  return 0;
}
