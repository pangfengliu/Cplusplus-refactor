#include "variable.h"

Variable::Variable(const string n, const int v):
  name(n), value(v)
{
}

string Variable::getName() const
{
  return name;
}
int Variable::getValue() const
{
  return value;
}
void Variable::setValue(int v)
{
  value = v;
}


