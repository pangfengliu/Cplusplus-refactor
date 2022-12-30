#include <iostream> 
#include <string>
#include <cassert>
using namespace std;
//--define--
// max # of var
#define VAR 100	       
// max # of lines of code
#define LINE 200       
enum Operator
  {ADD, SUB, MUL, DIV, MOD, EQL, NOTEQL,
   SMALLER, LARGER, SMALLEREQL, LARGEREQL};

enum StatementType
  {STOP, IF, GOTO, PRINT, ASSIGN};

//--find--
int find(string pattern, string table[])
{
  int index = 0;
  while (!table[index].empty()) {
    if (pattern == table[index])
      return index;
    index++;
  }
  return(-1); // not found
}
//--findOprCode--
int findOprCode(string name)
{
  string operators[] {"+", "-", "*", "/", "%", 
      "==", "!=", "<", ">", "<=", ">=", ""};
  int code = find(name, operators);
  if (code == -1)
    exit(-1);
  return(code);
}
//--findVariable--
int findVariable (string name, string varName[])
{
  int index {find(name, varName)};
  if (index == -1)
    exit(-1);
  return(index);
}
//--processIF--
void processIF(int lineNum, string varName[], int code[],
	       int opd1[], int opd2[], int compopr[],
	       int gotoLine[])
{
  code[lineNum] = IF;
  string opd;
  cin >> opd;
  opd1[lineNum] = findVariable(opd, varName);
  string opr;
  cin >> opr;
  compopr[lineNum] = findOprCode(opr);
  cin >> opd;
  opd2[lineNum] = findVariable(opd, varName);
  string gotoStr;
  cin >> gotoStr;
  assert(gotoStr == "GOTO");
  cin >> gotoLine[lineNum];
}
//--processASSIGN--
void processASSIGN(int lineNum, string first, string varName[],
		   int code[], int opd1[], int opd2[],
		   int compopr[], int target[])
{
  string opd, opr;
  code[lineNum] = ASSIGN;
  target[lineNum] = findVariable(first, varName);
  string assignStr;
  cin >> assignStr;
  assert(assignStr == "=");
  cin >> opd;
  opd1[lineNum] = findVariable(opd, varName);
  cin >> opr;
  compopr[lineNum] = findOprCode(opr);
  cin >> opd;
  opd2[lineNum] = findVariable(opd, varName);
}
//--processCode--
void processCode(string varName[], int code[], int opd1[],
		 int opd2[], int compopr[], int gotoLine[],
		 int target[])
{
  string first;
  string opd;
  int lineNum = 2;  // 1 is for var
  string firstTable[] {"STOP", "IF", "GOTO", "PRINT", ""};
  
  while (cin >> first) {
    int firstType {find(first, firstTable)};
    switch (firstType) {
    case GOTO:
      code[lineNum] = GOTO;
      cin >> gotoLine[lineNum];
      break;
    case STOP:
      code[lineNum] = STOP;
      break;
    case IF:
      code[lineNum] = IF;
      processIF(lineNum, varName, code, opd1, opd2, compopr,
		gotoLine);
      break;
    case PRINT:
      code[lineNum] = PRINT;
      cin >> opd;
      target[lineNum] =	findVariable(opd, varName);
      break;
    default:	       // must be assignment
      code[lineNum] = ASSIGN;
      processASSIGN(lineNum, first,varName, code, opd1, opd2,
		    compopr, target);
      break;
    }
    lineNum++;
  }
}
//--compare--
int compare(int operand1, int operand2, int opr)
{
  switch (opr) {
  case EQL: return (operand1 == operand2);
  case NOTEQL: return (operand1 != operand2);
  case SMALLER: return (operand1 < operand2);
  case LARGER: return (operand1 > operand2);
  case SMALLEREQL: return (operand1 <= operand2);
  case LARGEREQL: return (operand1 >= operand2);
  default:
    cout << "invalid comp " << opr << endl;
    exit(-1);
  }
}
//--arithmetic--
int arithemetic(int operand1, int operand2, int opr)
{
  switch (opr) {
  case ADD: return (operand1 + operand2);
  case SUB: return (operand1 - operand2);
  case MUL: return (operand1 * operand2);
  case DIV: return (operand1 / operand2);
  case MOD: return (operand1 % operand2);
  default:
    cout << "invalid comp " << opr << endl;
    exit(-1);
  }
}

//--runCode--
void runCode(string varName[], int varValue[], int code[],
	     int opd1[], int opd2[], int compopr[],
	     int gotoLine[], int target[])
{
  int line {2}; // starts at 2
  while (code[line] != STOP) {
    switch (code[line]) {
    case IF:
      if (compare(varValue[opd1[line]], varValue[opd2[line]],
		  compopr[line]))
	line = gotoLine[line];
      else
	line++;
      break;
    case GOTO:
      line = gotoLine[line];
      break;
    case ASSIGN:
      varValue[target[line]] = 
	arithemetic(varValue[opd1[line]], varValue[opd2[line]], 
		    compopr[line]);
      line++;
      break;
    case PRINT:
      cout << varValue[target[line]] << ' ';
      line++;
      break;
    default:
      cout << "invalid code " << code[line] << endl;
      exit(-1);
    }
  }
}

//--readVariable--
void readVariable(string varName[], int varValue[])
{  
  int count {0};
  string name;
  cin >> name;
  while (name != "END") {
    string assignStr;
    varName[count] = name;
    cin >> assignStr;
    assert(assignStr == "=");
    cin >> varValue[count];
    count++;
    cin >> name;
  }
  varName[count] = "";
}
//--main--
int main ()
{
  string varName[VAR];
  int varValue[VAR];
  // get variables
  readVariable(varName, varValue);
  int code[LINE]; 
  int opd1[LINE], compopr[LINE], opd2[LINE];  
  int gotoLine[LINE]; // IF 
  int target[LINE];  // both PRINT and ASSIGN
  // process code
  processCode(varName, code, opd1, opd2, compopr, gotoLine,
	      target);
  //run code
  runCode(varName, varValue, code, opd1, 
	  opd2, compopr, gotoLine, target);   
  return 0;
}
//--end--
