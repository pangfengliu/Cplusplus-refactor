#include <vector>
using namespace std;
#include "variable.h"

class VariableSet {
  vector<Variable> variables;
 public:
  VariableSet(void);
  Variable *find(const string n);
};
