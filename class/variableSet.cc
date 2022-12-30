#include <iostream>
#include <string>
#include <cassert>
using namespace std;

#include "variableSet.h"

//--findVar--
Variable *VariableSet::find(const string name)
{
  for (auto &variable: variables)
    if (name == variable.getName())
      return &(variable);
  cout << name << " not found\n";
  exit(-1); // not found
}
//--VariableSet--
VariableSet::VariableSet(void)
{
  string name;
  cin >> name;
  while (name != "END") {
    string assignStr;
    cin >> assignStr;
    assert(assignStr == "=");
    int value;
    cin >> value;
    variables.push_back(Variable(name, value));
    cin >> name;		// look for END
  }
}




