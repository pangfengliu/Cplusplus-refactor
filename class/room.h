#include "movement.h"

class Room {
 private:
  vector<vector<int>> mirror;
  int R, C;
  int setDir(const int i) const;
 public:
  Room(vector<vector<int>> m):
    mirror(m), R(m.size()), C(m[0].size()) {};
  int getR() const {return R;};
  int getC() const {return C;};
  bool inRoom(const Position &pos) const;
  int windowIndex(const Position &pos) const;
  bool hasMirror(const Position &pos) const;
  Movement setMovement(const int i) const;
};






