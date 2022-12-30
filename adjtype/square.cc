#include <iostream>
using namespace std;

int square(const int i)
{
  return i * i;
}
int main(void)
{
  int x;
  cin >> x;
  cout << "square of " << x << " is " << square(x) << endl;
  return 0;
}
