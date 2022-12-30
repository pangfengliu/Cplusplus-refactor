#include <iostream>
using namespace std;

extern int i; // the same one as in global-main.cc

void foo(void)
{
  i++;
}

