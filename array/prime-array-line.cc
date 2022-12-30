#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

main()
{
  int n;
  cin >> n;
  bool composite[n] {false};
  int column;
  cin >> column;
  assert(column > 0);
  int j {2};
  while (j * j <= n) {
    while (composite[j])
      j++;
    for (int i = 2 * j; i <= n; i += j)
      composite[i] = true;
    j++;
  }
  int count {0};
  for (int i = 2; i <= n; i++)
    if (!composite[i]) {
      cout << setw(4) << i;
      if (count % column == (column - 1))
	cout << endl;
      count++;
    }
}
