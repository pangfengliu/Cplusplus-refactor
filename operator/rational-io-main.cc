#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "rational-io.h"

int main()
{
  vector<Rational> rationals;
  Rational r;
  while (cin >> r)
    rationals.push_back(r);
  sort(rationals.begin(), rationals.end(),
       [](const Rational &a, const Rational &b) {return(a < b);});
  for (auto rational : rationals)
    cout << rational << endl;
  return 0;
}
 
