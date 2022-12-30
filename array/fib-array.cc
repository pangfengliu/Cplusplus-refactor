#include <iostream>
#include <cassert>
using namespace std;

main()
{
  int n;
  cin >> n;
  assert(n >= 2);
  int fab[n];
  fab[0] = 0;
  fab[1] = 1;
  for (int i = 2; i < n; i++)
    fab[i] = fab[i - 1] + fab[i - 2];
  for (int i = 0; i < n; i++)
    cout << fab[i] << ' ';
  cout << endl;
}
