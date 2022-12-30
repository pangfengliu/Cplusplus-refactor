#include "statement-virtual.h"

class Program {
  vector<Statement*> statements;
 public:
  Program(VariableSet &variableSet);
  ~Program();
  void run(VariableSet &variableSet);
};
