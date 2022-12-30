#include <iostream>
using namespace std;

main()
{
  int digit;
  int count {0};
  int evenSum {0}, oddSum {0};
  while (cin >> digit) {
    if (count % 2 == 0)
      evenSum += digit;
    else
      oddSum += digit;
    count++;
  }
  int diff = evenSum - oddSum;
  if (diff < 0)
    diff = -diff;
  cout << (diff % 11 == 0) << endl;
}
