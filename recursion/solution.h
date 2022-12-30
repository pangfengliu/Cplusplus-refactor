#include <iostream>
using namespace std;

class Solution {
 private:
  int layer;
  int sum;
 public:
  Solution(int l, int s): layer(l), sum(s) {};
  int getLayer() const {return layer;};
  int getSum() const {return sum;};
  Solution better(const Solution &s) {
    return (layer > s.layer || (layer == s.layer && sum > s.sum)?
	    *this : s);
  };
  void print() {cout << layer << " " << sum << endl;};
};
