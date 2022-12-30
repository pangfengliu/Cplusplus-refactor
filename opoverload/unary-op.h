#ifndef UnaryOpFunction_H
#define UnaryOpFunction_H
#include <iostream>
#include <string>
using namespace std;
#include "function.h"
#include "atom.h"

class UnaryOperator: public Function
{
protected:
  const Function *func;
  const string funcName;
public:
 UnaryOperator(const Function *f, string n):
  func(f), funcName(n) {};
  void print(ostream &out) const override;
  bool isConstant() const override {return(func->isConstant());}
  bool isAtom() const override {return false;};
  ~UnaryOperator();
};
#endif
