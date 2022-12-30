#include <iostream>
#include <utility>
using namespace std;
#include "life.h"

//--contain--
bool Life::contain(const Position &pos) const
{
  auto row {pos.getRow()};
  auto col {pos.getCol()};
  return (row >= 0 && row < size &&
	  col >= 0 && col < size);
}
//--neighborNum--
int Life::neighborNum(const Position &pos) const
{
  auto row {pos.getRow()};
  auto col {pos.getCol()};
  int neighbor = 0;
  for (int dr = -1; dr <= 1; dr++)
    for (int dc = -1; dc <= 1; dc++) {
      if (!(dr == 0 && dc == 0)) 
	if (contain(Position(row + dr, col + dc)))
	  if (from[row + dr][col + dc])
	    neighbor++;
    }
  return neighbor;
}
//--evolve--
void Life::evolve() {
  for (int r = 0; r < size; r++)
    for (int c = 0; c < size; c++) {
      int neighbor {neighborNum(Position(r, c))};
      if (from[r][c])
	to[r][c] =
	  (neighbor == 2 || neighbor == 3);
      else       // from[i][j] == false 
	to[r][c] = (neighbor == 3);
    }
}
//--changeDir--
void Life::changeDir()
{
  swap(from, to);
}
//--print--
void Life::print() const
{
  for (auto &row : from) {
    for (auto &number : row)
      cout << number;
    cout << endl;
  }
}
