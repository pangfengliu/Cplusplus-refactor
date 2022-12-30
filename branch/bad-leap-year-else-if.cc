#include <iostream>
using namespace std;

main()
{
  int year;
  bool leapYear;
  cin >> year;
  if (year % 400 != 0) 
    if ((year % 4 == 0) && (year % 100 != 0))
      leapYear = true;
    else
      leapYear = false;
  else
    leapYear = true;
  cout << leapYear << endl;
}
