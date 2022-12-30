#include <iostream>
using namespace std;

main()
{
  int i, j;
  cin >> i >> j;
  int k {3}, l {4};
  cout << ((k = i) > 0 || (l = j) > 0) << endl;
  cout << k << endl;
  cout << l << endl;
}
