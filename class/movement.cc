#include "movement.h"
#include <iostream>
using namespace std;

const vector<int> Movement::drow {1, 0, -1, 0};
const vector<int> Movement::dcol {0, -1, 0, 1};

Movement::Movement(int d, Position p, vector<int> newD):
  dir(d), pos(p), newDir(newD)
{
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


