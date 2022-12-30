#include <iostream>
using namespace std;

main()
{
  int i, j;
  cin >> i >> j;
  bool k {i == 3};
  cout << k << endl;
  k = (i == j);
  cout << k << endl;
}
