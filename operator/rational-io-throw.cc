#include <iostream>
#include <string>
#include <exception>
using namespace std;
#include "rational.h"

class NoSlash: public exception
{
  virtual const char* what() const noexcept
  {return "No slash found";}
};
NoSlash noSlash;

istream& operator>>(istream &in, Rational &r)
{
  string s;
  if (in >> s) {
    auto slash {s.find('/')};
    if (slash == string::npos)
      throw noSlash;
    int q = stoi(s.substr(0, slash));
    int p = stoi(s.substr(slash + 1));
    r = Rational(q, p);
  }
  return in;
}
ostream& operator<<(ostream &out, const Rational &r)
{
  r.print("", out);
  return out;
}
