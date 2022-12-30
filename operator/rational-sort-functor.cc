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
 
