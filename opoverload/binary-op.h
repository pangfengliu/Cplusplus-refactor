#include <iostream>
#include <string>
using namespace std;
#include "atom.h"

class BinaryOperator: public Function
{
protected:
  const Function *lfunc;
  const Function *rfunc;
  const string opName;
public:
 BinaryOperator(const Function *left, const Function *right,
		const string name):
  lfunc(left), rfunc(right), opName(name) {};
  void print(ostream &out) const override;
  bool isConstant() const override;
  bool isAtom() const override {return false;};
  ~BinaryOperator ();
};

