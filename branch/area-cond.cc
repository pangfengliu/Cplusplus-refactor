#include <iostream>
using namespace std;

main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int width {(c > a)? c - a : a - c};
  int height {(d > b)? d - b : b - d};
  cout << width * height << endl;
  cout << 2 * (width + height) << endl;
}

