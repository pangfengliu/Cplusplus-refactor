#include <iostream>
using namespace std;

main()
{
  int n;
  cin >> n;
  int sum {0};
  int squareSum {0};
  int cubicSum {0};
  for (int i = 1; i <= n; i++) {
    sum += i;
    squareSum += (i * i);
    cubicSum += (i * i * i);
  }
  cout << sum << endl;
  cout << squareSum << endl;
  cout << cubicSum << endl;
}
