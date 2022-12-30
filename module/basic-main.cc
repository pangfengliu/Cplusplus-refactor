#include <iostream>
#include <string>
#include <cassert>
using namespace std;
#include "statement.h"

int main ()
{
  // get all variables
  VariableSet variableSet;
  readVariable(variableSet);
  // process code
  vector<Statement> statements;
  processCode(statements, variableSet);
  /* run code */
  runCode(statements, variableSet);
  return 0;
}
