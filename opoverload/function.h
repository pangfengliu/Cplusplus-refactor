#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
using namespace std;

class Function
{
public:
  virtual double eval(double x) const = 0;
  virtual void print(ostream &out) const = 0;
  virtual bool isConstant() const = 0;
  virtual bool isAtom() const = 0;
  virtual Function *derivative() const = 0;
  virtual Function *copy() const = 0;
  virtual ~Function() {}
  double operator()(double x)
  {return this->eval(x);}

  Function &operator+(const Function &r);
  Function &operator-(const Function &r);
  Function &operator*(const Function &r);
  Function &operator/(const Function &r);
};
// top level functions
Function &sin(const Function &f);
Function &cos(const Function &f);
Function &exp(const Function &f);
ostream &operator<<(ostream &out, const Function &f);
#endif
