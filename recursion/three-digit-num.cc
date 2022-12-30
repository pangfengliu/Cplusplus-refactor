#include <iostream>
#include <string>
using namespace std;

string threeDigit(int number)
{
  if (number <= 999) 
    return to_string(number);
  else 
    return threeDigit(number / 1000)
      + ',' + to_string(number % 1000);
}
int main(void)
{
  int number;
  while (cin >> number) 
    cout << threeDigit(number) << endl;
  return 0;
}
