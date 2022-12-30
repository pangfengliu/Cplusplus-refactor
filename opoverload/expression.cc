#include "exp.h"
#include "arithmetic.h"
#include "atom.h"

Function & Exp::derivative() const {
  Function 
    *derv = new Multiplication(new Exp(func), &(func->derivative()));
  return(*derv);
}

void Exp::print(ostream &out) const {
  printhelper(out, "exp");
}
