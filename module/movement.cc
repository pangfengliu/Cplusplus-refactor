#include "movement.h"

//--changeDir--
void changeDir(Movement &movement)
{
  movement.dir = movement.newDir[movement.dir];
}
//--oneStep--
void oneStep(Movement &movement)
{
  vector<int> drow {1, 0, -1, 0};
  vector<int> dcol {0, -1, 0, 1};
  movement.pos.row += drow[movement.dir];
  movement.pos.col += dcol[movement.dir];
}


