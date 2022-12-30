#include "sincos.h"
#include "arithmetic.h"

Function *Sin::derivative() const
{
  Function *derv =
    new Mul(new Cos(func->copy()), func->derivative());
  return(derv);
}
Function *Cos::derivative() const
{
  Function *derv =
    new Mul(new Mul(new Constant(-1.0), new Sin(func->copy())),
	    func->derivative());
  return(derv);
}

