#include <iostream>
#include <cassert>

using namespace std;

#include "rational.h"

int gcd(int a, int b)
{
  if (a % b == 0)
    return b;
  else
    return gcd(b, a % b);
}

void Rational::simplify(Rational &a)
{
  int factor = gcd(abs(a.p), abs(a.q));
  a.p /= factor;
  a.q /= factor;
  if (a.p < 0) {
    a.p = -a.p;
    a.q = -a.q;
  }
}

Rational Rational::add(const Rational &b)
{
  Rational sum(b.p * q + b.q * p, b.p * p);
  sum.simplify();
  return sum;
}

Rational Rational::sub(const Rational &b)
{
  Rational diff(b.p * q - b.q * p, p * b.p);
  simplify(diff);
  return diff;
}

Rational Rational::mul(const Rational &b)
{
  Rational product(b.q * q, b.p * p);
  product.simplify();
  return product;
}

Rational Rational::div(const Rational &b)
{
  Rational fraction(b.q * p, b.p * q);
  fraction.simplify();
  return fraction;
}

void print(Rational &a)
{
  cout << q << '/' << p << endl;
}


