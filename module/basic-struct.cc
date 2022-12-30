#include <iostream>
#include <string>
#include <cassert>
using namespace std;

enum Operator
  {ADD, SUB, MUL, DIV, MOD, EQL, NOTEQL,
   SMALLER, LARGER, SMALLEREQL, LARGEREQL};

enum StatementType
  {STOP, IF, GOTO, PRINT, ASSIGN};

//--Variable--
typedef struct variable {
  string name;
  int value;
} Variable;
//--variableSet--
#define VAR 100	       // max # of var
typedef struct variableSet {
  int count;
  Variable variables[VAR];
} VariableSet;
//--Statement--
typedef struct statement {
  int code;
  Variable *opd1, *opd2;
  int compopr;	// IF 
  int gotoLine; // GOTO
  Variable *target;   // ASSIGN and PRINT
} Statement;
//--findVar--
// If not found exit (-1)
Variable *findVar(const string name,
		  VariableSet &variableSet)
{
  for (int i = 0; i < variableSet.count; i++)
    if (name == variableSet.variables[i].name)
      return &(variableSet.variables[i]);
  cout << name << " not found\n";
  exit(-1);			// not found
}
//--findCode--
// If not found return -1
int findCode(const string name,
	     const string table[])
{
  int index = 0;
  while (!table[index].empty()) {
    if (name == table[index])
      return index;
    index++;
  }
  return -1;
  cout << name << " not found\n";
  exit(-1);			// not found
}
//--findOprCode--
int findOprCode(string opr)
{
  string oprTable[] = {"+", "-", "*", "/", "%", 
		       "==", "!=", "<", ">", 
		       "<=", ">=", ""};
  
  int code = findCode(opr, oprTable);
  if (code == -1)
    exit(-1);

  return code;
}
//--processIF--
void processIF(Statement &statement,
	       VariableSet &variableSet)
{
  string gotoStr;

  statement.code = IF;

  string opd;
  cin >> opd;
  statement.opd1 = 
    findVar(opd, variableSet);

  string opr;
  cin >> opr;
  statement.compopr = findOprCode(opr);

  cin >> opd;
  statement.opd2 = 
    findVar(opd, variableSet);

  cin >> gotoStr;
  assert(gotoStr == "GOTO");

  cin >> statement.gotoLine;
}

void processASSIGN(Statement &statement,
		   const string assigned, 
		   VariableSet &variableSet)
{
  statement.target =
    findVar(assigned, variableSet);
  
  string assign;
  cin >> assign;
  assert(assign == "=");

  string opd;
  cin >> opd;
  statement.opd1 = 
    findVar(opd, variableSet);

  string opr;
  cin >> opr;
  statement.compopr = findOprCode(opr);

  cin >> opd;
  statement.opd2 = 
    findVar(opd, variableSet);
}
//--processCode--
void processCode(VariableSet &variableSet,
		 Statement statements[])
{
  string opd;
  string firstTable[] =   // must in order
    {"STOP", "IF", "GOTO", "PRINT", ""};

  int statementIndex = 2;
  string first;
  while (cin >> first) {
    Statement &statement =
      statements[statementIndex];
    int firstType = findCode(first, firstTable);
    switch (firstType) {
    case GOTO:
      statement.code = GOTO;
      cin >> statement.gotoLine;
      break;
    case STOP:
      statement.code = STOP;
      break;
    case IF:
      statement.code = IF;
      processIF(statement, variableSet);
      break;
    case PRINT:
      statement.code = PRINT;
      cin >> opd;
      statement.target =
	findVar(opd, variableSet);
      break;
    default:	       // must be assignment
      statement.code = ASSIGN;
      processASSIGN(statement, first,
		    variableSet);
      break;
    }
    statementIndex++;
  }
}
//--compare--
int compare(const int operand1, const int operand2, 
	    const int opr)
{
  switch (opr) {
  case EQL:
    return (operand1 == operand2);
  case NOTEQL:
    return (operand1 != operand2);
  case SMALLER:
    return (operand1 < operand2);
  case LARGER:
    return (operand1 > operand2);
  case SMALLEREQL:
    return (operand1 <= operand2);
  case LARGEREQL:
    return (operand1 >= operand2);
  default:
    cout << "invalid comp " << opr;
    exit(-1);
  }
}

int arithemetic(const int operand1,
		const int operand2, 
		const int opr)
{
  switch (opr) {
  case ADD:
    return (operand1 + operand2);
  case SUB:
    return (operand1 - operand2);
  case MUL:
    return (operand1 * operand2);
  case DIV:
    return (operand1 / operand2);
  case MOD:
    return (operand1 % operand2);
  default:
    cout << "invalid comp " << opr;
    exit(-1);
  }
}

//--runCode--
void runCode(VariableSet &variableSet,
	     Statement statements[])
{
  int line = 2;
  Statement *statement = &(statements[line]);
  
  while (statement->code != STOP) {
    switch (statement->code) {
    case IF:
      if (compare(statement->opd1->value, 
		  statement->opd2->value, 
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
		    statement->opd2->value, 
		    statement->compopr);
      //--assignmentend--
      line++;
      break;
    case PRINT:
      cout << statement->target->value << endl;
      line++;
      break;
    default:
      cout << "invalid code"
	   << statement->code << endl;
      exit(-1);
    }
    statement = &(statements[line]);
  }
}
//--readVariable--
void readVariable(VariableSet &variableSet)
{
  variableSet.count = 0;
  string name;
  cin >> name;
  while (name != "END") {
    Variable &variable =
      variableSet.variables[variableSet.count];

    variable.name = name;

    string assignStr;
    cin >> assignStr;
    assert(assignStr == "=");
    
    cin >> variable.value;
    cin >> name;
     variableSet.count++;
  }
}
//--readVariableEnd--

#define LINE 200 // max lines of code

int main ()
{
  // get all variables
  VariableSet variableSet;
  readVariable(variableSet);

  // process code
  Statement statements[LINE];
  processCode(variableSet, statements);

  /* run code */
  runCode(variableSet, statements);

  return 0;
}
