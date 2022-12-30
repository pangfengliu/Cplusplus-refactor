#include <iostream>
#include <cassert>
using namespace std;

int main(void)
{
  int year;
  cin >> year;
  assert(year > 0);
  cout << leapYear(year) << endl;
  return 0;
}

bool LeapYear(int y)
{  
  return ((y % 400 == 0) || ((y % 4 == 0) && !(y % 100 == 0)));
}
