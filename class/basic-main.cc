#include <iostream>
using namespace std;
#include "program.h"

int main ()
{
  VariableSet variableSet;
  Program program(variableSet);
  program.run(variableSet);
  return 0;
}
