#include "movement.h"
#include "board.h"

class Room: public Board {
 protected:
  int setDir(const int i) const;
 public:
  Room(vector<vector<int>> c): Board(c) {};
  int windowIndex(const Position &pos) const;
  Movement setMovement(const int i) const;
};
