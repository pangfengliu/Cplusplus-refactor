#include <iostream>
using namespace std;

int main(void)
{
  signed char sc;
  for (unsigned char uc = 0; uc < 200; uc++) {
    int i = uc;
    cout << "uc = " << i << endl;
  }
  // the following loop will not stop
  for (signed char sc = 0; sc < 200; sc++) {
    int i = sc;
    cout << "sc = " << i << endl;
  }
  return 0;
}
