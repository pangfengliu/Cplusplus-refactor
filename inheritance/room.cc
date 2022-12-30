#include <iostream>
#include <iomanip>
using namespace std;
#include "room.h"

//--setDir--
int Room::setDir(const int i) const
{
  auto R {getR()};
  auto C {getC()};
  int bound[] {R, R + C, 2 * R + C, 2 * (R + C)};
  for (int dir = 0; dir < 4; dir++)
    if (i < bound[dir])
      return dir;
  return(-1);
}
//--setMovement--
Movement Room::setMovement(const int i) const
{
  auto R {getR()};
  auto C {getC()};
  int initRow[] {0, i - C, R - 1, 2 * R + 2 * C - i - 1};
  int initCol[] {i, C - 1, 2 * C + R - i - 1, 0};
  auto dir {setDir(i)};
  return Movement(dir, Position(initRow[dir], initCol[dir]),
		  {1, 0, 3, 2});
}
//--windowIndex--
int Room::windowIndex(const Position &pos) const
{
  auto R {getR()};
  auto C {getC()};
  auto row {pos.getRow()};
  auto col {pos.getCol()};
  if (row < 0)
    return col;
  else if (col >= C)
    return C + row;
  else if (row >= R)
    return C + R + (C - col) - 1;
  else
    return 2 * C + R + (R - row) - 1;
}

