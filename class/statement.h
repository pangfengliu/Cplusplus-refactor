#include "variableSet.h"

enum StatementType {STOP, IF, GOTO, PRINT, ASSIGN};

enum Operator
  {ADD, SUB, MUL, DIV, MOD, EQL, NOTEQL,
   SMALLER, LARGER, SMALLEREQL, LARGEREQL};

//--Statement--
class Statement {
private:
  int code;
  Variable *opd1, *opd2;
  int compopr;	// IF 
  int gotoLine; // GOTO
  Variable *target;   // ASSIGN and PRINT

  int findOprCode(string opr) const;
  int compare(const int operand1, const int operand2, 
	      const int opr) const;
  int arithemetic(const int operand1, const int operand2, 
		  const int opr) const;
  void processIF(VariableSet &variableSet);
  void processASSIGN(const string assigned, 
		     VariableSet &variableSet);
 public:
  Statement() {code = STOP;};
  Statement(const string firstToken, VariableSet &variableSet);
  int run(VariableSet &variableSet, int line);
  bool stop() const {return code == STOP;};
};

