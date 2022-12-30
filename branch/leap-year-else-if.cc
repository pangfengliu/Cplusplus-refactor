#include <iostream>
using namespace std;

main()
{
  int year;
  cin >> year;
  bool leapYear;
  if (year % 400 == 0) 
    leapYear = true;
  else if ((year % 4 == 0) && (year % 100 != 0))
    leapYear = true;
  else
    leapYear = false;
  cout << leapYear << endl;
}
