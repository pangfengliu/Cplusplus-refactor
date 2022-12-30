#include "movement.h"

class Maze
{
 private:
  vector<vector<int>> cell;
  int row, col;
  Position current, end;
  Position nextPos(Position now, int dir) const;
  bool goal() const;
  bool contain(const Position &pos) const;
 public:
  Maze(vector<vector<int>> m, Position c, Position e):
    cell(m), row(m.size()), col(m[0].size()),
    current(c), end(e) {cell[c.getRow()][c.getCol()] = 1;};
  void print() const;
  bool go(const int step);
};
