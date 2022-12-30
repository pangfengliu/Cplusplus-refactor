#include <iostream>
#include <iomanip>
using namespace std;

#include "maze.h"

//--print--
void Maze::print() const
{
  for (int r = 0; r < row; r++) {
    for (int c = 0; c < col; c++)
      cout << setw(3) << cell[r][c];
    cout << endl;
  }
}
//--contain--
bool Maze::contain(const Position &pos) const
{
  auto r {pos.getRow()};
  auto c {pos.getCol()};
  return(r >= 0 && r < row && c >= 0 && c < col);
}
//--next--
Position Maze::nextPos(Position now, int direction) const
{
  Movement movement(direction, now);
  movement.oneStep();
  return movement.getPosition();
}
//--goal--
bool Maze::goal() const
{
  return (current.getRow() == end.getRow() &&
	  current.getCol() == end.getCol());
}
//--go--
bool Maze::go(const int step)
{
  if (goal()) {
    print();
    return true;
  }
  Position now {current};
  for (int dir = 0; dir < 4; dir++) {
    Position next {nextPos(current, dir)};
    auto nextRow {next.getRow()};
    auto nextCol {next.getCol()};
    if (contain(next) && cell[nextRow][nextCol] == 0) {
      cell[nextRow][nextCol] = step;
      current = next;
      if (go(step + 1))
	return true;
      cell[nextRow][nextCol] = 0;
      current = now;
    }
  }
  return false;
}
//--end--
