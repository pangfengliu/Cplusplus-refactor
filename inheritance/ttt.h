#include <vector>
using namespace std;
#include "board.h"

#define SIZE 3
#define PLAYERS 2

class TicTacToe: public Board {
 private:
  int move;
  vector<vector<int>> rowSum;
  vector<vector<int>> colSum;
  vector<int> cross1;
  vector<int> cross2;
 protected:
  bool checkRowCol(void) const;
  bool checkDiag(void) const;
 public:
  TicTacToe(void);
  bool win(void) const;
  int playerToMove(void) const;
  int playerMoved(void) const;
  int getMove(void) const;
  bool play(const int row, const int col);
};





