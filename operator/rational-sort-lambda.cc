#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "rational.h"

int main()
{
  vector<Rational> rationals;
  int p, q;
  while (cin >> q >> p)
    rationals.push_back(Rational(q, p));

  sort(rationals.begin(), rationals.end(),
       [](const Rational &a, const Rational &b) {return(a < b);});
  cout << "without capturing anything" << endl;
  for (auto rational : rationals) {
    rational.print();
    cout << endl;
  }

  bool ascending {false};
  sort(rationals.begin(), rationals.end(),
       [=](const Rational &a, const Rational &b)
       {return((ascending)? (a < b) :(a > b));});
  cout << "with capturing ascending" << endl;
  for (auto rational : rationals) {
    rational.print();
    cout << endl;
  }

  auto func = [](const Rational &a, const Rational &b)
    {return(a < b);};
  sort(rationals.begin(), rationals.end(), func);
  cout << "with fucntion object" << endl;
  for (auto rational : rationals) {
    rational.print();
    cout << endl;
  }
  return 0;
}
 
