#include "exp.h"
#include "arithmetic.h"

Function *Exp::derivative() const
{
  Function *derv = new Mul(new Exp(func->copy()),
	    func->derivative());
  return(derv);
}
