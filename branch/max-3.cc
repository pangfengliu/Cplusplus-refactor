#include <iostream>
using namespace std;

main()
{
  int i, j, k, max;
  cin >> i >> j >> k;
  if (i > j)
    max = i;
  else
    max = j;
  if (k > max)
    max = k;
  cout << max << endl;
}
