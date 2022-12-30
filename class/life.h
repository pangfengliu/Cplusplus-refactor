#include <vector>
using namespace std;
#include "position.h"

class Life {
private:
  vector<vector<int>> cellA, cellB;
  int size;
  vector<vector<int>> &from = cellA;
  vector<vector<int>> &to = cellB;
  bool contain(const Position &pos) const;
  int neighborNum(const Position &pos) const;
 public:
  Life(vector<vector<int>> a):
    cellA(a), cellB(a), size(a.size()) {};
  void evolve();
  void changeDir();
  void print() const;
};



