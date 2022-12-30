#include <vector>
using namespace std;
#include "position.h"

#define DIR 4

class Movement {
private:
  int dir;
  static const vector<int> drow;
  static const vector<int> dcol;
  Position pos;
  vector<int> newDir;
public:
  Movement(int d, Position p,
	   vector<int> newDir = {1, 2, 3, 0});
  Position getPosition(void);
  void changeDir(void);
  void oneStep(void);
};


