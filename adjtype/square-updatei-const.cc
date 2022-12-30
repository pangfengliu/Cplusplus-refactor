#include <iostream>
using namespace std;

int square(const int i)
{
  i++;
  return (i * i);
}
int main(void)
{
  int x = 10;
  cout << "square of " << x << " is " << square(x);
  return 0;
}
