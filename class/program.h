#include "statement.h"

class Program {
  vector<Statement> statements;
 public:
  Program(VariableSet &variableSet);
  void run(VariableSet &variableSet);
};
  
    

