#include <iostream>
using namespace std;

#ifndef FORMAT
#define FORMAT 0
#endif

int main(void)
{
  int y, m, d;
  cin >> y >> m >> d;
#if FORMAT == 0
  cout << m << '/' << d << '/' << y << endl;
#elif FORMAT == 1
  cout << d << '/' << m << '/' << y << endl;
#else
  cout << y << '/' << m << '/' << d << endl;
#endif
  return 0;
}
