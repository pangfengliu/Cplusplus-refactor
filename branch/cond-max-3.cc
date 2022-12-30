#include <iostream>
using namespace std;

main()
{
  int i, j, k;
  cin >> i >> j >> k;
  int max = (i > j)? i : j;
  if (k > max)
    max = k;
  cout << max << endl;
}
