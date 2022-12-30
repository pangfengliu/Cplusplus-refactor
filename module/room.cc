#include <iostream>
#include <iomanip>
using namespace std;
#include "room.h"

//--initRoom--
void initRoom(Room &room)
{
  cin >> room.R >> room.C;
  room.mirror = vector<vector<int>>(room.R, vector<int>(room.C));
  for (auto &row : room.mirror)
    for (auto &number : row) 
      cin >> number;
}
//--setDir--
int setDir(const Room &room, const int i)
{
  int R {room.R}, C {room.C};
  int bound[] {R, R + C, 2 * R + C, 2 * (R + C)};
  for (int dir = 0; dir < DIR; dir++)
    if (i < bound[dir])
      return dir;
  cout << "invalid i " << i << endl;
  exit(-1);
}
//--setMovement--
Movement setMovement(const Room &room, const int i)
{
  int R {room.R}, C {room.C};
  int initRow[] {0, i - C, R - 1, 2 * R + 2 * C - i - 1};
  int initCol[] {i, C - 1, 2 * C + R - i - 1, 0};

  int dir {setDir(room, i)};
  Movement movement
    {{initRow[dir], initCol[dir]}, {1, 0, 3, 2}, dir};  
  return movement;
}
//--inRoom--
bool inRoom(const Room &room, const Position &pos)
{
  return (pos.row >= 0 && pos.row < room.R &&
	  pos.col >= 0 && pos.col < room.C);
}
//--windowIndex--
int windowIndex(const Room &room, const Position &pos)
{
  int R {room.R}, C {room.C};
  if (pos.row < 0)
    return pos.col;
  else if (pos.col >= C)
    return C + pos.row;
  else if (pos.row >= R)
    return C + R + (C - pos.col) - 1;
  else
    return 2 * C + R + (R - pos.row) - 1;
}
//--hasMirror--
bool hasMirror(const Room &room, const Position &pos)
{
  return (room.mirror[pos.row][pos.col] == 1);
}
