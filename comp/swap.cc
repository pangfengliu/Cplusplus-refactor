#include <iostream>
using namespace std;

main()
{
  int i, j;
  cin >> i >> j;

  int temp = i;
  i = j;
  j = temp;

  cout << i << endl;
  cout << j << endl;
}
