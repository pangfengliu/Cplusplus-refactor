#include <iostream>
using namespace std;

main()
{
  int k;
  cin >> k;
  int i {1}, sum {0};
  while (i <= k) {
    sum += i;
    i++;
  }
  cout << sum << endl;
}
