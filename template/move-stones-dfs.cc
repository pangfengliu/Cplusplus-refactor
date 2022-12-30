#include <iostream>
#include <vector>
using namespace std;
#include "move-stones-dfs.h"

void MoveStones::process()
{
  cout << "from " << source << " to " << dest << endl;
}
vector <MoveStones> MoveStones::divide()
{
  vector <MoveStones> moves;
  moves.push_back(MoveStones(number - 1, buffer, dest, source));
  moves.push_back(MoveStones(1, source, dest, buffer));
  moves.push_back(MoveStones(number - 1, source, buffer, dest));
  return moves;
}
