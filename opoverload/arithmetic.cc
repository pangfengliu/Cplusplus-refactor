#include "arithmetic.h"

Function *Add::derivative() const
{
  if (lfunc->isConstant())
    return(rfunc->derivative());
  else if (rfunc->isConstant())
    return(lfunc->derivative());
  Function *derv = new Add(lfunc->derivative(), rfunc->derivative());
  return(derv);
}
Function *Sub::derivative() const
{
  Function *derv;
  if (lfunc->isConstant()) {
    derv = new Mul(new Constant(-1.0), rfunc->derivative());
    return(derv);
  } else if (rfunc->isConstant())
    return(lfunc->derivative());
  derv = new Sub(lfunc->derivative(), rfunc->derivative());
  return(derv);
}
Function *Mul::derivative() const
{
  Function *derv;
  if (lfunc->isConstant()) {
    derv = new Mul(lfunc->copy(), rfunc->derivative());
    return(derv);
  } else if (rfunc->isConstant()) {
    derv = new Mul(rfunc->copy(), lfunc->derivative());
    return(derv);
  } else {
    derv = new Add
      (new Mul(lfunc->copy(), rfunc->derivative()),
       new Mul(rfunc->copy(), lfunc->derivative()));
    return(derv);
  }
}
Function *Div::derivative() const {
  Function *derv;
  if (rfunc->isConstant()) {
    derv = new Div(lfunc->derivative(), rfunc->copy());
    return(derv);
  }
  else {
    Function *denominator =
      new Mul(rfunc->copy(), rfunc->copy());
    Function *nominator = new Sub
      (new Mul(lfunc->derivative(), rfunc->copy()),
       new Mul(rfunc->derivative(), lfunc->copy()));
    derv = new Div(nominator, denominator);
    return(derv);
  }
}

