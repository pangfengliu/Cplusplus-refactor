#include <iostream>
using namespace std;

main()
{
  int digits;
  cin >> digits;
  int evenSum {0}, oddSum {0};
  for (int i = 0; i < digits; i++) {
    int digit;
    cin >> digit;
    if (i % 2 == 0)
      evenSum += digit;
    else
      oddSum += digit;
  }
  int diff = evenSum - oddSum;
  if (diff < 0)
    diff = -diff;
  cout << (diff % 11 == 0) << endl;
}
