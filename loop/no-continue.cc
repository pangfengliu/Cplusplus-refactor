#include <iostream>
using namespace std;

main()
{
  int n;
  cin >> n;
  int sum {0};
  for (int count = 0; count < n; count++) {
    int i;
    cin >> i;
    if (i > 0) {
      sum += i;
    }
  }
  cout << sum << endl;
}
