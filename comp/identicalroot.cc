#include <iostream>
using namespace std;

main()
{
  int a, b, c;
  cin >> a >> b >> c;
  bool identialRoot
    {b * b - 4 * a * c == 0};
  cout << identialRoot << endl;
}
