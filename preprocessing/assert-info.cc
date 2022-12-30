#include <iostream>
using namespace std;

#ifdef NDEBUG
#define assert(cond) 0
#else
#define assert(cond) { \
  if (!(cond)) { \
    cout << "Assertion failed: " << #cond \
      << " file " << __FILE__ \
      << " line " << __LINE__ << endl; \
    exit(0); \
  } \
}
#endif
int main(void)
{
  int i = 0;
  assert(i == 1);
  return 0;
}
