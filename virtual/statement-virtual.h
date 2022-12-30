#include "variableSet.h"

enum Operator {ADD, SUB, MUL, DIV, MOD};
enum Compare {EQL, NOTEQL, SMALLER, LARGER,
	      SMALLEREQL, LARGEREQL};

//--Statement--
class Statement {
 public:
  virtual ~Statement() {};
  virtual bool stop() = 0;
  virtual int run(VariableSet &variableSet, int line) = 0;
};
//--StopSt-- 
class StopSt: public Statement
{
 public:
  StopSt() {};
  int run(VariableSet &variableSet, int line) override
  {return 0;};
  bool stop() override {return true;}
};
//--IfSt--
class IfSt: public Statement
{
  Variable *operand1, *operand2;
  int compareOp, gotoLine;
 public:
  int findCompCode(string comp) const;
 IfSt(Variable *opd1, string compStr, Variable *opd2, int line):
  operand1(opd1), operand2(opd2),compareOp(findCompCode(compStr)),
    gotoLine(line) {};
  bool compare() const;
  bool stop() override {return false;}
  int run(VariableSet &variableSet, int line) override;
};
//--GotoSt--
class GotoSt: public Statement
{
  int gotoLine; // GOTO
 public:
  GotoSt(int line): gotoLine(line) {}
  bool stop() override {return false;}
  int run(VariableSet &variableSet, int line) override;
};

class PrintSt: public Statement
{
  Variable *target;
 public:
  PrintSt(Variable *t): target(t) {}
  int run(VariableSet &variableSet, int line) override;
  bool stop() override {return false;}
};

class AssignSt: public Statement
{
  Variable *target, *operand1, *operand2;
  int opr;
 public:
  int findOprCode(string opr) const;
 AssignSt(Variable *t, Variable *opd1, string opStr, Variable *opd2):
  target(t), operand1(opd1), operand2(opd2),
  opr(findOprCode(opStr)) {}
  int arithemetic();
  int run(VariableSet &variableSet, int line) override;
  bool stop() override {return false;}
};
