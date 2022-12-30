#include <iostream>
#include <cassert>
using namespace std;

#include "rational.h"

Rational::Rational(int b, int a): q(b), p(a)
{
  assert(a != 0);
  simplify();
}
Rational Rational::add(const Rational &b) const
{
  Rational sum(p * b.q + q * b.p, p * b.p);
  sum.simplify();
  return sum;
}
Rational Rational::sub(const Rational &b) const
{
  Rational difference(p * b.q - q * b.p, p * b.p);
  difference.simplify();
  return difference;
}
Rational Rational::mul(const Rational &b) const
{
  Rational product(q * b.q, p * b.p);
  product.simplify();
  return product;
}
Rational Rational::div(const Rational &b) const
{
  Rational fraction(q * b.p, p * b.q);
  fraction.simplify();
  return fraction;
}
int gcd(int a, int b)
{
  if (a % b == 0)
    return b;
  else
    return gcd(b, a % b);
}
void Rational::simplify()
{
  if (q == 0)
    p = 1;
  else {
    int factor = gcd(abs(p), abs(q));
    p /= factor;
    q /= factor;
    if (p < 0) {
      p = -p;
      q = -q;
    }
  }
}
void Rational::print(string msg) const
{
  cout << msg << q << '/' << p << endl;
}
