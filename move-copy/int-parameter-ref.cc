#include "int.h"

void output(Integer &j)
{
  j.print("output: ");
}
int main()
{
  Integer i(20);
  output(i);
  return 0;
}
