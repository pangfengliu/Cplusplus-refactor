#include <iostream>
using namespace std;

bool natural(const int i)
{
  if (i == 1) {
    cout << "1 is a natural number.\n";
    return true;
  }
  cout << "is " << i << " a natrual number?\n";
  if (natural(i - 1)) {
    cout << i-1 << " is a natrual number, "
	 << i << " is also a natural number.\n";
    return true;
  }
  return false;
}
int main(void)
{
  natural(3);
  return 0;
}
