#include "board.h"
#include "movement.h"

class Maze: public Board
{
 private:
  Position current, end;
 protected:
  Position nextPos(const Position &now, const int dir) const;
  bool goal() const; 
 public:
  Maze(vector<vector<int>> ce, Position start, Position end);
  bool go(const int step);
  void printAll() const;
};
