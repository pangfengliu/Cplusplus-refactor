#include <iostream>
#include <cassert>
using namespace std;

#include "rational-op.h"

Rational::Rational(int _q, int _p = 1)
{
  assert(_p != 0);
  p = _p;
  q = _q;
  simplify();
}

void Rational::simplify(void)
{
  if (p < 0) {
    q = -q;
    p = -p;
  }
}

Rational Rational::operator+(Rational &a)
{
  Rational sum(p * a.q + q * a.p, p * a.p);
  return sum;
}

bool Rational::operator<(Rational &a)
{
  return(q * a.p < p * a.q);
}

void Rational::print(void)
{
  cout << q << '/' << p;
}
