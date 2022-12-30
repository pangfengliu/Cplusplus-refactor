#include <iostream>
using namespace std;

#include "program-virtual.h"

int main()
{
  VariableSet variableSet;
  Program program(variableSet);
  program.run(variableSet);
  return 0;
}
