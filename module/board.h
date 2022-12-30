#include <vector>
using namespace std;
#include "position.h"

struct Board {
  int size;
  vector<vector<int>> cell;
};
void initBoard(Board &Board);
void printBoard(const Board &Board, const Position &pos);

