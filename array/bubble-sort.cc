#include <iostream>
#include <cassert>
using namespace std;

main()
{
  int m;
  cin >> m;
  assert(m > 0);
  int n[m];
  for (int i = 0; i < m; i++)
    cin >> n[i];
  for (int i = m - 2; i >= 0; i--)
    for (int j = 0; j <= i; j++)
      if (n[j] > n[j + 1]) {
	int temp = n[j];
	n[j] = n[j + 1];
	n[j + 1] = temp;
      }
  for (int i = 0; i < m; i++)
    cout << n[i] << ' ';
  cout << endl;
}
