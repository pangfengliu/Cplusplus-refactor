#include <iostream>
#include <bitset>
using namespace std;

class Number
{
  bitset<4> bits;
  int ones;
 public:
 Number(int k): bits(k), ones(bits.count()) {}
  int getones() const;
  bitset<4> getbits() const;
  bool operator<(const Number &r) const;
  bool operator==(const Number &r) const;
  bool operator>(const Number &r) const;
  void print() const;
};

