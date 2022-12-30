#include <iostream>
#include <string>
#include <cassert>
using namespace std;
#include "variableSet.h"

//--findVar--
Variable *findVar(VariableSet &variableSet,
		  const string name)
{
  for (auto &variable: variableSet.variables)
    if (name == variable.name)
      return &(variable);
  cout << name << " not found\n";
  exit(-1);			// not found
}
//--readVariable--
void readVariable(VariableSet &variableSet)
{
  string name;
  int value;
  cin >> name;
  while (name != "END") {
    string assignStr;
    cin >> assignStr;
    assert(assignStr == "=");
    cin >> value;
    variableSet.variables.push_back({name, value});
    cin >> name;
  }
}
//--readVariableEnd--

