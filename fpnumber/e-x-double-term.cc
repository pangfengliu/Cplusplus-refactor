#include <iostream>
#include <iomanip>
using namespace std;

main()
{
  double x;
  cin >> x;
  double e {1.0};
  int n {20};
  double term {1.0};
  for (int i = 1; i <= n; i++) {
    term *= (x / i);
    e += term;
  }
  cout << setprecision(10) << e << endl;
}
