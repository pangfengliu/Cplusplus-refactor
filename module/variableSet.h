#include <vector>
using namespace std;
#include "variable.h"
//--variableSet--
struct VariableSet {
  vector<Variable> variables;
};
Variable *findVar(VariableSet &variableSet, const string name);
void readVariable(VariableSet &variableSet);

