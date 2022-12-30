#include "arithmetic.h"
#include "sincos.h"
#include "exp.h"

ostream &operator<<
(ostream &out, const Function &f)
{
  f.print(out);
  return(out);
}
Function &Function::operator+(const Function &r)
{
  Add *sum = new Add(this, &r);
  return(*sum);
}
Function &Function::operator-(const Function &r)
{
  Sub *diff = new Sub(this, &r);
  return(*diff);
}
Function &Function::operator*(const Function &r)
{
  Mul *prod = new Mul(this, &r);
  return(*prod);
}
Function &Function::operator/(const Function &r)
{
  Div *ratio = new Div(this, &r);
  return(*ratio);
}
Function &sin(const Function &f)
{
  Sin *sin_func = new Sin(&f);
  return(*sin_func);
}
Function &cos(const Function &f)
{
  Cos *cos_func = new Cos(&f);
  return(*cos_func);
}
Function &exp(const Function &f)
{
  Exp *exp_func = new Exp(&f);
  return(*exp_func);
}
