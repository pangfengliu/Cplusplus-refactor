#include <iostream>
#include <vector>
#include <algorithm>		// for sort
using namespace std;
#include "rational.h"

int main()
{
  vector<Rational> rationals;
  int p, q;
  while (cin >> q >> p)
    rationals.push_back(Rational(q, p));
  sort(rationals.begin(), rationals.end()); 
  for (auto rational : rationals) {
    rational.print();
    cout << endl;
  }
  return 0;
}
 
