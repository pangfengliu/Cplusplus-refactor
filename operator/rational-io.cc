#include <iostream>
#include <string>
#include <exception>
using namespace std;
#include "rational-io.h"

istream& operator>>(istream &in, Rational &r)
{
  string s;
  if (in >> s) {
    auto slash {s.find('/')};
    if (slash == string::npos)
      exit(-1);
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
