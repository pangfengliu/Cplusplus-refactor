#include <iostream>
using namespace std;
#include "int-copy.h"

int main()
{
  Integer i;
  i.print("i:");
  Integer j(20);
  j.print("j:");
  i = j;
  i.print("i:");
  j.print("j:");
  Integer k(i);
  i.print("i:");
  k.print("k:");
  i.inc();
  i.inc();
  k.inc();
  i.print("i:");
  j.print("j:");
  k.print("k:");
  return 0;
}
