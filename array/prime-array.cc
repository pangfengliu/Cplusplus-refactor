#include <iostream>
#include <cassert>
using namespace std;

main()
{
  int n;
  cin >> n;
  assert(n >= 2);
  bool prime[n];
  for (int i = 2; i <= n; i++)
    prime[i] = true;
  int j {2};
  while (j * j <= n) {
    while (!prime[j])
      j++;
    for (int i = 2 * j; i <= n; i += j)
      prime[i] = false;
    j++;
  }
  for (int i = 2; i <= n; i++)
    if (prime[i])
      cout << i << ' ';
  cout << endl;
}
