#include "position.h"

#define DIR 4
class Movement {
private:
  int dir;
  static const int drow[DIR];
  static const int dcol[DIR];
  static int defaultNewDir[DIR];
  Position pos;
  int newDir[DIR];
public:
  Movement(int d, Position p, int newDir[DIR] = defaultNewDir);
  Position getPosition(void);
  void changeDir(void);
  void oneStep(void);
};


