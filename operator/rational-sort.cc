#include <iostream>
#include <vector>
#include <utility>		// for swap
using namespace std;

#include "rational.h"

int main()
{
  vector<Rational> rationals;
  int p, q;
  while (cin >> q >> p)
    rationals.push_back(Rational(q, p));
  for (int i = rationals.size() - 2; i >= 0; i--)
    for (int j = 0; j <= i; j++) 
      if (rationals[j + 1] < rationals[j])
	swap(rationals[j], rationals[j + 1]);
  for (auto rational : rationals) {
    rational.print();
    cout << endl;
  }
  return 0;
}
 
