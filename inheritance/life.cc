#include <iostream>
using namespace std;
#include "life.h"

//--neighborNum--
int Life::neighborNum(const Position &pos) const
{
  auto row {pos.getRow()};
  auto col {pos.getCol()};
  int neighbor = 0;
  for (int dr = -1; dr <= 1; dr++)
    for (int dc = -1; dc <= 1; dc++) {
      if (!(dr == 0 && dc == 0)) 
	if (contain({row + dr, col + dc}))
	  if (get(Position(row + dr, col + dc)) == 1)
	    neighbor++;
    }
  return neighbor;
}
//--become--
int Life::become(const Position &pos) const
{
  auto neighbor {neighborNum(pos)};
  if (get(pos) == 1)
    return (neighbor == 2 || neighbor == 3)? 1 : 0;
  else 
    return (neighbor == 3)? 1 : 0;
}
//--evolve--
void Life::evolve(const Life& life)
{
  for (int r = 0; r < getR(); r++)
    for (int c = 0; c < getC(); c++)
      set(Position(r, c), life.become(Position(r, c)));
}



