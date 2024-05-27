#include <iostream>
#include <cassert>
using namespace std;

#include "rational.h"
Rational::Rational(int b, int a): p(a), q(b)
{
  assert(a != 0);
  simplify();
} 
Rational Rational::operator+(const Rational &a) const
{
  Rational sum(p * a.q + q * a.p, p * a.p);
  sum.simplify();
  return sum;
}
Rational Rational::operator-(const Rational &a) const
{
  Rational difference(p * a.q - q * a.p, p * a.p);
  difference.simplify();
  return difference;
}
Rational Rational::operator*(const Rational &a) const
{
  Rational product(q * a.q, p * a.p);
  product.simplify();
  return product;
}
Rational Rational::operator/(const Rational &a) const
{
  Rational fraction(q * a.p, p * a.q);
  fraction.simplify();
  return fraction;
}
bool Rational::operator<(const Rational &a) const
{
  return(q * a.p < p * a.q);
}
bool Rational::operator==(const Rational &a) const
{
  return(p == a.p && q == a.q);
}
bool Rational::operator>(const Rational &a) const
{
  return(!(*this < a) && !(*this == a));
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
void Rational::print(string msg, ostream &out) const
{
  out << msg << q << '/' << p << endl;
}
