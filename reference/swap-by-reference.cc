#include <iostream> 
using namespace std;

void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main(void)
{
  int i, j;
  cin >> i >> j;
  cout << "i = " << i << " j = " << j << endl;
  swap(i, j);
  cout << "i = " << i << " j = " << j << endl;
  return 0;
}
