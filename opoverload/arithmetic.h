#include "binary-op.h"

class Add: public BinaryOperator
{
public:
  Add(const Function *left, const Function *right):
  BinaryOperator(left, right, "+") {};
  double eval(double x) const override 
  {return(lfunc->eval(x) + rfunc->eval(x));};
  Function *derivative() const override;
  Function *copy()  const override {
    return new Add(lfunc->copy(), rfunc->copy());
  }
};
class Sub: public BinaryOperator
{
public:
  Sub(const Function *left, const Function *right):
  BinaryOperator(left, right, "-") {};
  double eval(double x) const override
  {return(lfunc->eval(x) - rfunc->eval(x));}
  Function *derivative() const override;
  Function *copy() const override {
    return new Sub(lfunc->copy(), rfunc->copy());
  }
};
class Mul: public BinaryOperator
{
public:
  Mul(const Function *left,
      const Function *right):
  BinaryOperator(left, right, "*") {};
  double eval(double x) const override
  {return(lfunc->eval(x) * rfunc->eval(x));}
  Function *derivative() const override;
  Function *copy()  const override {
    return new Mul(lfunc->copy(), rfunc->copy());
  }
};
class Div: public BinaryOperator
{
public:
  Div(const Function *left,
      const Function *right):
  BinaryOperator(left, right, "/") {};
  double eval(double x) const override
  {return(lfunc->eval(x) / rfunc->eval(x));}
  Function *derivative() const override;
  Function *copy() const override {
    return new Div(lfunc->copy(), rfunc->copy());
  }
};

