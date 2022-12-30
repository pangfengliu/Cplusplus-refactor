#include <iostream>
#include <string>
#include <cassert>
#include "program-virtual.h"
using namespace std;

enum StatementType {STOP, IF, GOTO, PRINT, ASSIGN};

Program::~Program()
{
  for (auto s : statements)
    delete s;
}
Program::Program(VariableSet &variableSet)
{
  string first, opd1Str, opd2Str, gotoStr, compStr; 
  string assign, oprStr, printOpd;
  int gotoLine;
  while (cin >> first) {
    if (first == "GOTO") {
      cin >> gotoLine;
      statements.push_back(new GotoSt(gotoLine));
    } else if (first == "STOP") {
      statements.push_back(new StopSt());
    } else if (first == "IF") {
      cin >> opd1Str >> compStr >> opd2Str
	  >> gotoStr >> gotoLine;
      assert(gotoStr == "GOTO");
      statements.push_back
	(new IfSt(variableSet.find(opd1Str), compStr,
		  variableSet.find(opd2Str), gotoLine));
    } else if (first == "PRINT") {
      cin >> printOpd;
      statements.push_back
	(new PrintSt(variableSet.find(printOpd)));
    } else {
      // must be assignment
      cin >> assign >> opd1Str >> oprStr >> opd2Str;
      assert(assign == "=");
      statements.push_back
	(new AssignSt(variableSet.find(first),
		      variableSet.find(opd1Str),
		      oprStr, variableSet.find(opd2Str)));
    }
  }
}
//--Program::run--
void Program::run(VariableSet &variableSet)
{
  int line {0};
  while (!(statements[line]->stop())) 
    line = statements[line]->run(variableSet, line);
}
//--Program::end--
