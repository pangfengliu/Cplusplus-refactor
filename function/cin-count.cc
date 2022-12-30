#include <iostream>
using namespace std;

int main()
{
  int sum {0}, count {0}, i;
  while (cin >> i) {
    sum += i;
    count++;
  }
  cout << sum / count << endl;
  return 0;
}
