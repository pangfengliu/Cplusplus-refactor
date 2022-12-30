#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "mirror.h"

//--changeDir--
void changeDir(Movement &movement)
{
  int newDir[4] {1, 0, 3, 2};
  movement.dir = newDir[movement.dir];
}
//--oneStep--
void oneStep(Movement &movement)
{
  int drow[4] {1, 0, -1, 0};
  int dcol[4] {0, -1, 0, 1};
  movement.pos.row += drow[movement.dir];
  movement.pos.col += dcol[movement.dir];
}

//--initRoom--
void initRoom(Room &room)
{
  cin >> room.R >> room.C;
  for (int row = 0; row < room.R; row++)
    for (int col = 0; col < room.C; col++) {
      int temp;
      cin >> temp;
      room.mirror[row][col] = (temp == 1);
    }
}
//--setDir--
int setDir(const Room &room, const int i)
{
  int R {room.R}, C {room.C};
  int bound[] {R, R + C, 2 * R + C, 2 * (R + C)};
  for (int dir = 0; dir < 4; dir++)
    if (i < bound[dir])
      return dir;
  cout << "invalid i " << i << endl;
  exit(-1);
}
//--setMovement--
Movement setMovement(const Room &room,
		     const int i)
{
  Movement movement;
  int R {room.R}, C {room.C};
  int initRow[] {0, i - C, R - 1,
      2 * R + 2 * C - i - 1};
  int initCol[] {i, C - 1,
      2 * C + R - i - 1, 0};
  movement.dir = setDir(room, i);
  movement.pos.row = initRow[movement.dir];
  movement.pos.col = initCol[movement.dir];
  return movement;
}

//--inRoom--
bool inRoom(const Room &room, const Position &pos)
{
  return (pos.row >= 0 && pos.row < room.R &&
	  pos.col >= 0 && pos.col < room.C);
}
//--windowIndex--
int windowIndex(const Room &room,
		const Position &pos)
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
  return room.mirror[pos.row][pos.col];
}
//--main--
int main()
{
  Room room;
  initRoom(room);

  for (int i = 0; i < 2 * (room.R + room.C); i++) {
    Movement movement = setMovement(room, i);
    while (inRoom(room, movement.pos)) {
      if (hasMirror(room, movement.pos))
	changeDir(movement);
      oneStep(movement);
    }
    cout << windowIndex(room, movement.pos) << " ";
  }
  cout << endl;
  return 0;
}
//--end
