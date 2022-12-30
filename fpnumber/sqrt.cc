#include <iostream>
using namespace std;
main ()
{
  double n, error;
  cin >> n >> error;
  double low {0.0}, high {n};
  double x = (low + high) / 2.0;
  while (x * x - n > error || n - x * x > error) {
    cout << "x = " << x << " error = " << x * x - n << endl;
    if (x * x - n > error)
      high = x;
    else
      low = x;
    x = (low + high) / 2.0;
  }
  cout << "x = " << x << " error = " << x * x - n << endl;
}
