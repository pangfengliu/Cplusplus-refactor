#include <iostream>
using namespace std;
#include "room.h"

int main()
{
  int r, c;
  cin >> r >> c;
  Room room(readCell(r, c));
  for (int i = 0; i < 2 * (r + c); i++) {
    Movement light {room.setMovement(i)};
    while (room.contain(light.getPosition())) {
      if (room.get(light.getPosition()) == 1)
	light.changeDir();	// has a mirror
      light.oneStep();
    }
    cout << room.windowIndex(light.getPosition()) << ' ';
  }
  cout << endl;
  return 0;
}
