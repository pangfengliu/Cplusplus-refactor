#include <iostream>
using namespace std;

int main(void)
{
  int i {1};
  int j {2};
  int *ptrToInt = &i;
  const int * ptrToConstInt = &i;
  int * const constPtrToInt = &i;
  const int * const constPtrToConstInt = &i;
  ptrToInt = &j;	/* OK */
  *ptrToInt += 3;	/* OK */
  ptrToConstInt = &j;	/* OK */
  *ptrToConstInt += 3;	/* not OK */
  constPtrToInt = &j;	/* not OK */
  *constPtrToInt += 3;	/* OK */
  constPtrToConstInt = &j;	/* not OK */
  *constPtrToConstInt += 3;	/* not OK */
  return 0;
}
