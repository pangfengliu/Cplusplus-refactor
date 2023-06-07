#include <iostream>
#include "ones.h"
using namespace std;

int Number::getones() const
{
  return ones;
}
bitset<4> Number::getbits() const
{
  return bits;
}
void Number::print() const
{
  cout << bits << endl;
}
bool Number::operator<(const Number &next) const
{
  return
    (ones < next.ones || (ones == next.ones &&
      bits.to_ulong() < next.bits.to_ulong()));
}
bool Number::operator==(const Number &next) const
{
  return
	(ones == next.ones &&
	  bits.to_ulong() == next.bits.to_ulong());
}
bool Number::operator>(const Number &next) const
{
  return(!(*this < next) && !(*this == next));
}
