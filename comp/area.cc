#include <iostream>
using namespace std;

main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int area {(c - a) * (d - b)};
  int perriphral {2 * ((c - a) + (d - b))};

  cout << area << endl;
  cout << perriphral << endl;
}
