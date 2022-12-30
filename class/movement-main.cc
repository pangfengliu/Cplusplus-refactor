#include <iostream>
using namespace std;

#include "movement.h"

int main()
{
  Position pos(-3, 2);
  Movement move1(1, pos);

  move1.oneStep();
  auto newPos = move1.getPosition();
  cout << "move1 = (" << newPos.getRow() << ", "
       << newPos.getCol() << ")\n";
  cout << "pos = (" << pos.getRow() << ", "
       << pos.getCol() << ")\n";

  move1.changeDir();
  move1.oneStep();
  move1.oneStep();
  newPos = move1.getPosition();
  cout << "move1 = (" << newPos.getRow()
       << ", " << newPos.getCol() << ")\n";

  Movement move2(1, pos, {3, 0, 1, 2});
  move2.oneStep();
  newPos = move2.getPosition();
  cout << "move2 = (" << newPos.getRow()
       << ", " << newPos.getCol() << ")\n";

  cout << "pos = (" << pos.getRow() << ", "
       << pos.getCol() << ")\n";

  move2.changeDir();
  move2.oneStep();
  move2.oneStep();
  newPos = move2.getPosition();
  cout << "move2 = (" << newPos.getRow()
       << ", " << newPos.getCol() << ")\n";

}



