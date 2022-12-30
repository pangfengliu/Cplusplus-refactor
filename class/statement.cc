#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;
#include "statement.h"

Statement::Statement(const string firstToken,
		     VariableSet &variableSet)
{
  string opd;
  if (firstToken == "GOTO") {
    code = GOTO;
    cin >> gotoLine;
  } else if (firstToken == "STOP")
    code = STOP;
  else if (firstToken == "IF") {
    code = IF;
    processIF(variableSet);
  } else if (firstToken == "PRINT") {
    code = PRINT;
    cin >> opd;
    target = variableSet.find(opd);
  } else {
    // must be assignment
    code = ASSIGN;
    processASSIGN(firstToken, variableSet);
  }
}
//--findOprCode--
int Statement::findOprCode(string opr) const
{
  vector<string> oprTable {"+", "-", "*", "/", "%", 
      "==", "!=", "<", ">", "<=", ">="};
  vector<string>::iterator it =
    std::find(oprTable.begin(), oprTable.end(), opr);
  if (it != oprTable.end())
    return it - oprTable.begin();
  cout << opr << "not found" << endl;
  exit(-1);
}
//--compare--
int Statement::compare(const int operand1, const int operand2, 
		       const int opr) const
{
  switch (opr) {
  case EQL: return (operand1 == operand2);
  case NOTEQL: return (operand1 != operand2);
  case SMALLER: return (operand1 < operand2);
  case LARGER: return (operand1 > operand2);
  case SMALLEREQL: return (operand1 <= operand2);
  case LARGEREQL: return (operand1 >= operand2);
  default:
    cout << "invalid comp " << opr;
    exit(-1);
  }
}
int Statement::arithemetic(const int operand1, const int operand2, 
			   const int opr) const
{
  switch (opr) {
  case ADD: return (operand1 + operand2);
  case SUB: return (operand1 - operand2);
  case MUL: return (operand1 * operand2);
  case DIV: return (operand1 / operand2);
  case MOD: return (operand1 % operand2);
  default:
    cout << "invalid comp " << opr;
    exit(-1);
  }
}
//--processIF--
void Statement::processIF(VariableSet &variableSet)
{
  string gotoStr;
  code = IF;
  string opd;
  cin >> opd;
  opd1 = variableSet.find(opd);
  string opr;
  cin >> opr;
  compopr = findOprCode(opr);
  cin >> opd;
  opd2 = variableSet.find(opd);
  cin >> gotoStr;
  assert(gotoStr == "GOTO");
  cin >> gotoLine;
}
void Statement::processASSIGN(const string assigned,
			      VariableSet &variableSet)
{
  target = variableSet.find(assigned);
  string assign;
  cin >> assign;
  assert(assign == "=");
  string opd;
  cin >> opd;
  opd1 = variableSet.find(opd);
  string opr;
  cin >> opr;
  compopr = findOprCode(opr);
  cin >> opd;
  opd2 = variableSet.find(opd);
}
int Statement::run(VariableSet &variableSet, int line)
{
  switch (code) {
  case IF:
    if (compare(opd1->getValue(), opd2->getValue(), compopr))
      return gotoLine;
    else
      return line + 1;
  case GOTO:
    return gotoLine;
  case ASSIGN:
    target->setValue(arithemetic(opd1->getValue(), 
				 opd2->getValue(), compopr));
    return line + 1;
  case PRINT:
    cout << target->getValue() << ' ';
    return line + 1;
  default:
     cout << "invalid code" << code << endl;
     return -1;
  }
}
