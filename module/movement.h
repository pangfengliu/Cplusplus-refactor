#include <vector>
using namespace std;
#include "position.h"
#define DIR 4

struct Movement {
  Position pos;
  vector<int> newDir;
  int dir;
};
void changeDir(Movement &movement);
void oneStep(Movement &movement);


