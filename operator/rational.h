#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>

class Rational {
 private:
  int p, q;	// q/p
  void simplify();
 public:
 Rational(int b = 0, int a = 1); 
  Rational operator+(const Rational &r) const;
  Rational operator-(const Rational &r) const;
  Rational operator*(const Rational &r) const;
  Rational operator/(const Rational &r) const;
  bool operator<(const Rational &r) const;
  bool operator==(const Rational &r) const;
  bool operator>(const Rational &r) const;
  void print(string msg = "", ostream &out = cout) const;
};
#endif
