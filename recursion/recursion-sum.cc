#include <stdio.h>

int sum_square(int n)
{
  if (n == 1)
    return 1;
  else
    return sum_square(n - 1) + n * n;
}
int main()
{
  int n;
  scanf("%d\n", &n);
  printf("%d\n", sum_square(n));
  return 0;
}
