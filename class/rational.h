struct Rational
{
  int q, p;	// q/p
  void simplify();
public:
  Rational(int r = 0, int s = 1);
  Rational add(const Rational &b) const;
  Rational sub(const Rational &b) const;
  Rational mul(const Rational &b) const;
  Rational div(const Rational &b) const;
  void print(string msg) const;
};
