#include <iostream>
using namespace std;

int main()
{
  int k;
  cin >> k;
  int digits;
  cin >> digits;
  int prev {0};
  int toPrint;
  for (int i = 0; i < digits; i++) {
    int digit;
    cin >> digit;
    int value = 10 * prev + digit;
    toPrint = value / k;
    if (toPrint > 0 || i > 0 || digits == 1)
      cout << toPrint << endl;
    prev = value % k;
  }
}
