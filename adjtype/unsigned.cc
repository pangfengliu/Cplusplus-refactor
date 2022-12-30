#include<stdio.h>

int main(void)
{
  int count;
  int i = 2147483640;
  unsigned int ui = 2147483640;
  unsigned int ten = 10;

  for (count = 0; count < 10; count++) {
    printf("ui = %d\n", ui + count);
    printf("i = %u\n", i + count);
  }
  return 0;
}
