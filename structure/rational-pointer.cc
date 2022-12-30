#include <iostream>
using namespace std;

struct Rational {
  int q, p;	// q/p
};
int gcd(int a, int b)
{
  if (a % b == 0)
    return b;
  else
    return gcd(b, a % b);
}
void simplify(Rational *a)
{
  if (a->q == 0)
    a->p = 1;
  else {
    int factor {gcd(abs(a->p), abs(a->q))};
    a->p /= factor;
    a->q /= factor;
    if (a->p < 0) {
      a->p = -a->p;
      a->q = -a->q;
    }
  }
}
Rational add(const Rational *a, const Rational *b)
{
  Rational sum {b->p * a->q + b->q * a->p, b->p * a->p};
  simplify(&sum);
  return sum;
}

Rational sub(const Rational *a, const Rational *b)
{
  Rational diff {b->p * a->q - b->q * a->p, a->p * b->p};
  simplify(&diff);
  return diff;
}
Rational mul(const Rational *a, const Rational *b)
{
  Rational product {b->q * a->q, b->p * a->p};
  simplify(&product);
  return product;
}
Rational div(const Rational *a, const Rational *b)
{
  Rational fraction {b->q * a->p, b->p * a->q};
  simplify(&fraction);
  return fraction;
}
void print(const Rational *a)
{
  cout << a->q << '/' << a->p << endl;
}
int main()
{
  Rational a;
  cin >> a.q >> a.p;
  print(&a);
  Rational b;
  cin >> b.q >> b.p;
  print(&b);
  Rational c {add(&a, &b)};
  print(&c);

  c = sub(&a, &b);
  print(&c);
  c = mul(&a, &b);
  print(&c);
  c = div(&a, &b);
  print(&c);
  return 0;
}

