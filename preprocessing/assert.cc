#include <iostream>
using namespace std;

#define assert(cond) { \
  if (!(cond)) { \
    cout << "Assertion failed: " << #cond \
         << endl;				\
    exit(0); \
  } \
}
int main(void)
{
  int i = 0;
  assert(i == 1);
  return 0;
}
