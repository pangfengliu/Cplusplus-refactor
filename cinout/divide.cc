#include <iostream>
using namespace std;

int main()
{
  int k;
  cin >> k;
  int count {0}, prev {0};
  int toPrint;
  int digit;
  while (cin >> digit) {
    int value = 10 * prev + digit;
    toPrint = value / k;
    if (!(count == 0 && toPrint == 0))
      cout << toPrint << endl;
    prev = value % k;
    count++;
  }
  if (count == 1 && toPrint == 0)
    cout << toPrint << endl;
}
