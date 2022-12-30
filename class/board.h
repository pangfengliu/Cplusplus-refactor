#include <vector>
using namespace std;
#include "position.h"

class Board
{
  vector<vector<int>> cell;
  int size;
 public:
  Board(vector<vector<int>> c): cell(c), size(c.size()) {};
  int getSize() const {return size;};
  void print(const Position &pos) const {
    cout << cell[pos.getRow()][pos.getCol()] << ' ';
  }
};
