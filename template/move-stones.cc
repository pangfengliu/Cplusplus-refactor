#include "move-stones.h"

vector <MoveStones> MoveStones::divide()
{
  vector <MoveStones> moves;
  moves.push_back(MoveStones(number - 1,buffer, dest, source));
  moves.push_back(MoveStones(1, source, dest, buffer));
  moves.push_back(MoveStones(number - 1, source, buffer, dest));
  return moves;
}


