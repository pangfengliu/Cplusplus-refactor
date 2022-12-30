#include <iostream>
#include <string>
using namespace std;

string threeDigit(const string number)
{
  int len = number.length();
  if (len <= 3) 
    return number;
  else 
    return threeDigit(number.substr(0, len - 3))
      + ',' + number.substr(len - 3);
}
int main(void)
{
  string number;
  while (cin >> number) 
    cout << threeDigit(number) << endl;
  return 0;
}
