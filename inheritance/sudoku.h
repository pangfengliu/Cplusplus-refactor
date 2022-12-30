#include "board.h"

#define BLOCKSIZE 3
#define BOARDSIZE 9
#define CELLS (BOARDSIZE * BOARDSIZE)

class Sudoku: public Board
{
 private:
  vector<vector<bool>> rowHas, colHas, blockHas;
 protected:
  int blockIndex(const Position &pos);
  bool empty(const int level);
  bool conflict(const int level, const int test);
  void place(const Position &pos, const int number);
  void remove(const Position &pos);
 public:
  Sudoku(vector<vector<int>> ce);
  bool placeNumber(const int level);
};
