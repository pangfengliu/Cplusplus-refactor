#include <iostream>
using namespace std;

bool leapYear(int y)
{  
  return ((y % 400 == 0) || ((y % 4 == 0) && !(y % 100 == 0)));
}

int howManyDays(int year = 1970, int month = 1)
{
  cout << "year = " << year << " month = "
       << month << endl;

  if (year < 0 || month < 1 || month > 12)
    return 0;
  switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      return 31;
    case 4: case 6: case 9: case 11: 
      return 30;
    case 2:
      return (leapYear(year)? 29 : 28); 
      break;
    }
  return 0;
}

int main(void)
{
  int year, month;
  while (cin >> year >> month) 
    cout << howManyDays(year, month) << endl;

  cout << howManyDays(1900) << endl;
  cout << howManyDays() << endl;
  return 0;
}
