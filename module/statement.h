#include "variableSet.h"

enum StatementType {STOP, IF, GOTO, PRINT, ASSIGN};
enum Operator
  {ADD, SUB, MUL, DIV, MOD, EQL, NOTEQL,
   SMALLER, LARGER, SMALLEREQL, LARGEREQL};
//--Statement--
struct Statement {
  int code;
  Variable *opd1, *opd2;
  int compopr;	// IF 
  int gotoLine; // GOTO
  Variable *target;   // ASSIGN and PRINT
};
void processCode(vector<Statement> &statements,
		 VariableSet &variableSet);
void runCode(vector<Statement> &statements,
	     VariableSet &variableSet);

