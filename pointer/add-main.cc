#include <stdio.h>

int main(void)
{
  int i;
  int j;
  int k;

  scanf("%d", &i);
  scanf("%d", &j);
  printf("i = %d\n", i);
  k = add_n(nullptr, j);
  printf("i = %d, k = %d\n", i, k);
  k = add_n(&i, j);
  printf("i = %d, k = %d\n", i, k);
  
  return 0;
}
