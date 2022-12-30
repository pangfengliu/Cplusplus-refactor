#include <vector>
using namespace std;
#include "board.h"

class Life: public Board
{
protected:
  int neighborNum(const Position &pos) const;
  int become(const Position &pos) const;
 public:
 Life(vector<vector<int>> c): Board(c) {};
 Life(const int size, const int v): Board(size, size, v) {};
  void evolve(const Life& life);
};
