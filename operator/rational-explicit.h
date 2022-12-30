#include <string>

class Rational {
 private:
  int p, q;	// q/p
  void simplify();
 public:
 explicit Rational(int b, int a = 1); 
  Rational operator+(const Rational &r) const;
  Rational operator-(const Rational &r) const;
  Rational operator*(const Rational &r) const;
  Rational operator/(const Rational &r) const;
  bool operator<(const Rational &r) const;
  void print(string msg = "") const;
};
