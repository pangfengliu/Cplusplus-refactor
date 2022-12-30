#include <iostream>
#include <iomanip>
using namespace std;
#include "maze.h"

//--Maze--
Maze::Maze(vector<vector<int>> c, Position s, Position e):
  Board(c), current(s), end(e)
{
  set(current, 1);
}
//--nextPos--
Position Maze::nextPos(const Position &now,
		       const int direction) const
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
    printAll();
    return true;
  }
  Position now = current;
  for (int dir = 0; dir < 4; dir++) {
    Position next = nextPos(current, dir);
    if (contain(next) &&
	get(next) == 0) {
      set(next, step);
      current = next;
      if (go(step + 1))
	return true;
      set(next, 0);
      current = now;
    }
  }
  return false;
}
void Maze::printAll() const
{
  for (int i = 0; i < getR(); i++) {
    for (int j = 0; j < getC(); j++) 
      cout << setw(4) << get(Position(i, j))
	   << " ";
    cout << endl;
  }
}

