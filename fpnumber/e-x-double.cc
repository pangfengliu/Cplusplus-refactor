#include <iostream>
#include <iomanip>
using namespace std;

main()
{
  double x;
  cin >> x;
  double e {1.0};
  int n {10};
  int factorial {1};
  double xpower {1.0};
  for (int i = 1; i <= n; i++) {
    factorial *= i;
    xpower *= x;
    e += xpower / factorial;
  }
  cout << setprecision(10) << e << endl;
}
