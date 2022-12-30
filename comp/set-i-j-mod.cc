#include <iostream>
using namespace std;

main()
{
  int i, j;
  cin >> i >> j;
  int k {i % j};
  cout << k << endl;
  cin >> i >> j;
  k = i % j;
  cout << k << endl;
}

