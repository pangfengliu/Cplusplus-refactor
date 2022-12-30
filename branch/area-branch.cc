#include <iostream>
using namespace std;

main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int width, height;
  if (c > a)
    width = c - a;
  else
    width = a - c;
  if (d > b)
    height = d - b;
  else
    height = b - d;
  int area = width * height;
  int perriphral = 2 * (width + height);
  cout << area << endl;
  cout << perriphral << endl;
}

