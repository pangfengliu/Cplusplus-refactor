#include <iostream>
using namespace std;

int main()
{
  int i, j, k;
  cin >> j;
  if (j > 3)
    goto end;
  i = 0;
 start:
  j = 1;
 end:
  k = 2;
  if (k++ > 0)
    goto start;
  return 0;
}
