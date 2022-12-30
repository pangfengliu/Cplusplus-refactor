#include <iostream>
using namespace std;

main()
{
  int year;
  cin >> year;
  bool k {(year % 400 == 0) || 
    ((year % 4 == 0) && (year % 100 != 0))};
  cout << k << endl;
}
