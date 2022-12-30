#include <iostream>
using namespace std;

main()
{
  int i, j;
  cin >> i >> j;
  int k {i + 4 * j};
  cout << k << endl;
  k = (i + 4) * j;
  cout << k << endl;
}
