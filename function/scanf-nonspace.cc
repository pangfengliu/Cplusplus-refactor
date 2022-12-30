#include <stdio.h>

int main()
{
  int i = 1,  j = 2, k = 3;
  int n;

  n = scanf("%d/%d/%d", &i, &j, &k);
  printf("i = %d,  j = %d, k = %d\n", i, j, k);
  printf("%d items read by scanf\n", n);

  n = scanf("%d/%d/%d", &i, &j, &k);
  printf("i = %d,  j = %d, k = %d\n", i, j, k);
  printf("%d items read by scanf\n", n);

  return 0;
}

