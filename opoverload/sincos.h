#include <math.h>
#include "unary-op.h"

class Sin: public UnaryOperator
{
public:
 Sin(const Function *f):
  UnaryOperator(f, "sin") {};
  double eval(double x) const override
  {return(sin(func->eval(x)));};
  Function *derivative() const override;
  Function *copy() const override {return new Sin(func->copy());}
};
class Cos: public UnaryOperator
{
public:
 Cos(const Function *f):
  UnaryOperator(f, "cos") {};
  double eval(double x) const override
  {return(cos(func->eval(x)));};
  Function *derivative() const override;
  Function *copy() const override {return new Cos(func->copy());}
};

