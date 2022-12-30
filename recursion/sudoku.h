#include <vector>
using namespace std;
#include "position.h"

#define BLOCKSIZE 3
#define BOARDSIZE 9
#define CELLS (BOARDSIZE * BOARDSIZE)

class Sudoku {
 private:
  vector<vector<int>> board;
  vector<vector<bool>> rowHas, colHas, blockHas;
  int blockIndex(const Position &pos);
  bool empty(const int level);
  bool conflict(const int level, const int test);
  void print();
  void place(const Position &pos, const int number);
  void remove(const Position &pos);
public:
  Sudoku(vector<vector<int>> b);
  bool placeNumber(const int level);
};
