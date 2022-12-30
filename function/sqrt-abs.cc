#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  double n, error;
  while (cin >> n >> error) {
    double low {0.0}, high {n};
    double x = (low + high) / 2.0;
    while (fabs(x * x - n) > error) {
      double e = x * x - n;
      cout << "x = " << x << " error = " << e << endl;
      if (e > error)
	high = x;
      else
	low = x;
      x = (low + high) / 2.0;
    }
    cout << "x = " << x << " error = " << x * x - n << endl;
    cout << "sqrt(" << n << ") = " << sqrt(n) << endl;
  }
  return 0;
}
