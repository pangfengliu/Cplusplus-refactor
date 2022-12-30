#include <iostream>
using namespace std;
main()
{
  int n;
  cin >> n;
  int i {1};
  int sum {0};
  int squareSum {0};
  int cubicSum {0};
  do {
    sum += i;
    squareSum += (i * i);
    cubicSum += (i * i * i);
    i++;
  } while (i <= n);
  cout << sum << endl;
  cout << squareSum << endl;
  cout << cubicSum << endl;
}
