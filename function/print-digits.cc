#include <iostream>
#include <cassert>
using namespace std;
#define MAXDIGITS 40

void printDigits(int number)
{
  if (number < 0)
    return;
  int index = 0;
  int digits[MAXDIGITS];
  while (number != 0) {
    digits[index] = (number % 10);
    number /= 10;
    index++;
  }
  for (int i = index - 1; i >= 0; i--)
    cout << digits[i] << ' ';
  return;
}
int main(void)
{
  int number;
  while (cin >> number) {
    printDigits(number);
    cout << endl;
  }
  return 0;
}
