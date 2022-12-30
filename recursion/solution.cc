#include <iostream>
using namespace std;

#include "solution.h"

Solution::Solution(int l, int s):
  layer(l), sum(s)
{
}

Solution Solution::better(const Solution &s)
{
  return
    (layer > s.layer ||
     (layer == s.layer && sum > s.sum)?
     *this : s);
}

int Solution::getLayer() const
{
  return layer;
}
  
int Solution::getSum() const
{
  return sum;
}

void Solution::print()
{
  cout << layer << " " << sum << endl;
}

