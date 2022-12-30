#ifndef ATOM_H
#define ATOM_H
#include "function.h"

class Constant: public Function
{
  double value;
public:
 Constant(double c): value(c) {}
  double eval(double x) const override
  {return value;}
  void print(ostream &out) const override
  {out << value;}
  bool isConstant() const override
  {return true;}
  bool isAtom() const override
  {return true;}
  Function *derivative() const override {
    Function *derv = new Constant(0.0);
    return(derv);
  }
  Function *copy() const override {return new Constant(value);}
  ~Constant() {cout << "Constant " << value
		    << " deleted." << endl;};
};
class Variable: public Function
{
public:
  double eval(double x) const override {return x;}
  void print(ostream &out) const override
  {out << 'x';}
  bool isConstant() const override {return false;}
  bool isAtom() const override {return true;};
  Function *derivative() const override {
    Function *derv = new Constant(1.0);
    return(derv);
  }
  Function *copy() const override {return new Variable();}
  ~Variable() {cout << "Variable deleted." << endl;};
};
#endif
