#include <stdio.h>

int main(void)
{
  unsigned long long int i;
  scanf("%lld%lld", &i);
  printf("%s\n", (i % 2) == 0? "yes" : "no");
  printf("%s\n", (i % 3) == 0? "yes" : "no");
  printf("%s\n", (i % 5) == 0? "yes" : "no");
  printf("%s\n", (i % 11) == 0? "yes" : "no");
  return 0;
}
