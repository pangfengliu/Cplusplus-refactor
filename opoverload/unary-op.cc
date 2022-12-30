#include <iostream>
#include <string>
using namespace std;
#include "unary-op.h"

void UnaryOperator::print(ostream &out) const
{
  out << funcName << '(';
  func->print(out);
  out << ')';
}
//--unary-destructor--
UnaryOperator::~UnaryOperator()
{
  if (!func->isAtom())
    delete func;
  cout << funcName << " deleted" << endl;
}
//--unary-destructor-end--


