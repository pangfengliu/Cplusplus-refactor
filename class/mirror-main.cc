#include <iostream>
using namespace std;
#include "room.h"

//--main--
int main()
{
  int R, C;
  cin >> R >> C;
  vector<vector<int>> mirror =
    vector<vector<int>>(R, vector<int>(C));
  for (auto &row : mirror)
    for (auto &number : row) 
      cin >> number;

  Room room(mirror);
  for (int i = 0; i < 2 * (R + C); i++) {
    Movement light {room.setMovement(i)};
    while (room.inRoom(light.getPosition())) {
      if (room.hasMirror(light.getPosition()))
	light.changeDir();
      light.oneStep();
    }
    cout << room.windowIndex(light.getPosition()) << " ";
  }
  cout << endl;
  return 0;
}
//--end
