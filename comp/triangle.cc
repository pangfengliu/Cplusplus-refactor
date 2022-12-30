#include <iostream>
using namespace std;

main()
{
  int a, b, c;
  cin >> a >> b >> c;
  bool valid 
    {a > 0 && b > 0 && c > 0 && a + b > c && b + c > a &&
     a + c > b};
  cout << valid << endl;
}
