#include <iostream>
#include <iomanip>
using namespace std;

#include "room.h"

//--main--
int main()
{
  Room room;
  initRoom(room);
  for (int i = 0; i < 2 * (room.R + room.C); i++) {
    auto movement {setMovement(room, i)};
    while (inRoom(room, movement.pos)) {
      if (hasMirror(room, movement.pos))
	changeDir(movement);
      oneStep(movement);
    }
    cout << windowIndex(room, movement.pos) <<endl;
  }
  return 0;
}
//--end
