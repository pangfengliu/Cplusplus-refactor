#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#include "statement-virtual.h"

//--findCompCode--
int IfSt::findCompCode(string comp) const
{
  vector<string> compTable
    {"==", "!=", "<", ">", "<=", ">="};
  vector<string>::iterator it =
    std::find(compTable.begin(), compTable.end(), comp);
  if (it != compTable.end())
    return it - compTable.begin();
  cout << comp << "not found" << endl;
  exit(-1);
}
//--findOprCode--
int AssignSt::findOprCode(string opr) const
{
  vector<string>
    oprTable {"+", "-", "*", "/", "%"};
  vector<string>::iterator it =
    std::find(oprTable.begin(), oprTable.end(), opr);
  if (it != oprTable.end())
    return it - oprTable.begin();
  cout << opr << "not found" << endl;
  exit(-1);
}
//--compare--
bool IfSt::compare() const
{
  int opd1 {operand1->getValue()};
  int opd2 {operand2->getValue()};
  switch (compareOp) {
  case EQL:
    return (opd1 == opd2);
  case NOTEQL:
    return (opd1 != opd2);
  case SMALLER:
    return (opd1 < opd2);
  case LARGER:
    return (opd1 > opd2);
  case SMALLEREQL:
    return (opd1 <= opd2);
  case LARGEREQL:
    return (opd1 >= opd2);
  default:
    cout << "invalid comp " << compareOp;
    exit(-1);
  }
}
int AssignSt::arithemetic()
{
  int opd1 {operand1->getValue()};
  int opd2 {operand2->getValue()};
  
  switch (opr) {
  case ADD:
    return (opd1 + opd2);
  case SUB:
    return (opd1 - opd2);
  case MUL:
    return (opd1 * opd2);
  case DIV:
    return (opd1 / opd2);
  case MOD:
    return (opd1 % opd2);
  default:
    cout << "invalid comp " << opr;
    exit(-1);
  }
}
int IfSt::run(VariableSet &variableSet, int line)
{
  if (compare())
    return gotoLine;
  else
    return line + 1;
}
int GotoSt::run(VariableSet &variableSet, int line)
{
  return gotoLine;
}
int AssignSt::run(VariableSet &variableSet, int line)
{  
  target->setValue(arithemetic());
  return line + 1;
}
int PrintSt::run(VariableSet &variableSet, int line)
{
  cout << target->getValue() << ' ';
  return line + 1;
}


