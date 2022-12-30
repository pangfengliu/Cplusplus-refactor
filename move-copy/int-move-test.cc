#include "int-move.h"

int main()
{
  Integer i;
  i.print("i:");
  Integer j(20);
  j.print("j:");
  i = move(j);
  i.print("i:");
  j.print("j:");
  Integer k(move(i));
  i.print("i:");
  k.print("k:");
  return 0;
}

