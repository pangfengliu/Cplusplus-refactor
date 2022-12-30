#include <iostream>
#include <string>
using namespace std;
#include "binary-op.h"

//--binary-destructor--
BinaryOperator::~BinaryOperator ()
{
  if (!lfunc->isAtom())
    delete lfunc;
  if (!rfunc->isAtom())
    delete rfunc;
  cout << opName << " deleted." << endl;
}
//--binary-destructor-end--
void BinaryOperator::print(ostream &out) const
{
  if (!lfunc->isAtom())
    out << '(';
  lfunc->print(out);
  if (!lfunc->isAtom())
    out << ')';
  out << opName;
  if (!rfunc->isAtom())
    out << '(';
  rfunc->print(out);
  if (!rfunc->isAtom())
    out << ')';
}
bool BinaryOperator::isConstant() const
{
  return(lfunc->isConstant() && rfunc->isConstant());
}
