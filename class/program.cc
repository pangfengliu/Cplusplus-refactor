#include <iostream>
using namespace std;
#include "program.h"

Program::Program(VariableSet &variableSet)
{
  string first;
  while (cin >> first) 
    statements.push_back(Statement(first, variableSet));
}
void Program::run(VariableSet &variableSet)
{
  int line {0};
  while (!(statements[line].stop())) 
    line = statements[line].run(variableSet, line);
}

  
