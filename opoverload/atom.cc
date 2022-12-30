#include "atom.h"
bool notAnAtom(const Function *func)
{  
  return ((dynamic_cast<const Variable*>(func) == nullptr) &&
	  (dynamic_cast<const Constant*>(func) == nullptr));
}
