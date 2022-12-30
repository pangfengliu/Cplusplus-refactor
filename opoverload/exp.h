#include <math.h>
#include "unary-op.h"

class Exp: public UnaryOperator
{
public:
 Exp(const Function *f):
  UnaryOperator(f, "exp") {}
  double eval(double x) const override
  {return(exp(func->eval(x)));}
  Function *derivative() const override;
  Function *copy() const override {return new Exp(func->copy());}
};

