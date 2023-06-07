#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "rational.h"

bool comp(const Rational &a, const Rational &b)
{
  return(a > b);
}
int main()
{
  vector<Rational> rationals;
  int p, q;
  while (cin >> q >> p)
    rationals.push_back(Rational(q, p));
  sort(rationals.begin(), rationals.end(), comp);
  for (auto rational : rationals) {
    rational.print();
    cout << endl;
  }
  return 0;
}
 
