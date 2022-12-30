class Rational {
 private:
  int p;
  int q;
  void simplify();
 public:
  Rational(int _q, int _p); 
  Rational operator+(Rational &);
  bool operator<(Rational &);
  void print(void);
};
