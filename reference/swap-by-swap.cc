#include <iostream>
#include <utility>
using namespace std;

int main(void)
{
  int i, j;
  cin >> i >> j;
  cout << "i = " << i << " j = " << j << endl;
  swap(i, j);
  cout << "i = " << i << " j = " << j << endl;
  return 0;
}
