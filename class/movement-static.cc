#include "movement-static.h"

const int Movement::drow[DIR] {1, 0, -1, 0};
const int Movement::dcol[DIR] {0, -1, 0, 1};
int Movement::defaultNewDir[DIR] {1, 2, 3, 0};

Movement::Movement(int d, Position p, int newD[DIR]):
  dir(d), pos(p)
{
  for (int i = 0; i < DIR; i++)
    newDir[i] = newD[i];
}

Position Movement::getPosition()
{
  return pos;
}

//--changeDir--
void Movement::changeDir()
{
  dir = newDir[dir];
}
//--oneStep--
void Movement::oneStep()
{
  pos.setRow(pos.getRow() + drow[dir]);
  pos.setCol(pos.getCol() + dcol[dir]);
}


