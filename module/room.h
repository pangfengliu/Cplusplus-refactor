#include "movement.h"

struct Room {
  int R, C;
  vector<vector<int>> mirror;
};
void initRoom(Room &room);
bool inRoom(const Room &room, const Position &pos);
int windowIndex(const Room &room, const Position &pos);
bool hasMirror(const Room &room, const Position &pos);
Movement setMovement(const Room &room, const int i);





