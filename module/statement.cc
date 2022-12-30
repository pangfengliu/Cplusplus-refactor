#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;
#include "statement.h"

//--findOprCode--
int findOprCode(string opr)
{
  vector<string> oprTable {"+", "-", "*", "/", "%", 
      "==", "!=", "<", ">", "<=", ">="};
  vector<string>::iterator it =
    find(oprTable.begin(), oprTable.end(), opr);
  if (it != oprTable.end())
    return it - oprTable.begin();
  cout << opr << "not found" << endl;
  exit(-1);
}
//--compare--
int compare(const int operand1, const int operand2, const int opr)
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
int arithemetic(const int operand1, const int operand2,
		const int opr)
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
void processIF(Statement &statement, VariableSet &variableSet)
{
  string gotoStr;
  statement.code = IF;
  string opd;
  cin >> opd;
  statement.opd1 = findVar(variableSet, opd);
  string opr;
  cin >> opr;
  statement.compopr = findOprCode(opr);
  cin >> opd;
  statement.opd2 = findVar(variableSet, opd);
  cin >> gotoStr;
  assert(gotoStr == "GOTO");
  cin >> statement.gotoLine;
}
void processASSIGN(Statement &statement, const string assigned, 
		   VariableSet &variableSet)
{
  statement.target = findVar(variableSet, assigned);
  string assign;
  cin >> assign;
  assert(assign == "=");
  string opd;
  cin >> opd;
  statement.opd1 = findVar(variableSet, opd);
  string opr;
  cin >> opr;
  statement.compopr = findOprCode(opr);
  cin >> opd;
  statement.opd2 = findVar(variableSet, opd);
}
//--processCode--
void processCode(vector<Statement> &statements,
		 VariableSet &variableSet)
{
  string opd;
  vector<string> firsts {"STOP", "IF", "GOTO", "PRINT"};
  string first;
  while (cin >> first) {
    Statement statement;
    if (first == "GOTO") {
      statement.code = GOTO;
      cin >> statement.gotoLine;
    } else if (first == "STOP") {
      statement.code = STOP;
    } else if (first == "IF") {
      statement.code = IF;
      processIF(statement, variableSet);
    } else if (first == "PRINT") {
      statement.code = PRINT;
      cin >> opd;
      statement.target = findVar(variableSet, opd);
    }
    else {
      statement.code = ASSIGN;
      processASSIGN(statement, first, variableSet);
    }
    statements.push_back(statement);
  }
}
//--runCode--
void runCode(vector<Statement> &statements,
	     VariableSet &variableSet)
{
  int line {0};
  auto statement {&(statements[line])};
  while (statement->code != STOP) {
    switch (statement->code) {
    case IF:
      if (compare(statement->opd1->value, statement->opd2->value, 
		  statement->compopr))
	line = statement->gotoLine;
      else
	line++;
      break;
    case GOTO:
      line = statement->gotoLine;
      break;
    case ASSIGN:
      //--assignment--
      statement->target->value = 
	arithemetic(statement->opd1->value,
		    statement->opd2->value, statement->compopr);
      //--assignmentend--
      line++;
      break;
    case PRINT:
      cout << statement->target->value << ' ';
      line++;
      break;
    default:
      cout << "invalid code" << statement->code << endl;
      exit(-1);
    }
    statement = &(statements[line]);
  }
}
