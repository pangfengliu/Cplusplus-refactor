#include <iostream>
using namespace std;

main()
{
  int i, j, k;
  cin >> i >> j;
  while (i % j != 0) {
    k = i % j;
    i = j;
    j = k;
  }
  cout << j << endl;
}
