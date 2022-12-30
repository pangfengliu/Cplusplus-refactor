#include "int.h"

int main()
{
  Integer i;
  i.print("i:");
  Integer j(20);
  j.print("j:");
  i = j;
  return 0;
}
