#include <iostream>
using namespace std;

int main(void)
{
  int i, j;
  cin >> i >> j;
  i ^= j ^= i ^= j;
  cout << "i = " << i
       << " j = " << j << endl;
  return 0;
}
