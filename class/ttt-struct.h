#include <vector>
using namespace std;

#define SIZE 3
#define PLAYERS 2
struct TicTacToe {
private:
  int move;
  vector<vector<int>> board;
  vector<vector<int>> rowSum;
  vector<vector<int>> colSum;
  vector<int> cross1;
  vector<int> cross2;
  bool checkRowCol(void);
  bool checkDiag(void);
public:
  bool win(void);
  void init(void);
  int playerToMove(void);
  int playerMoved(void);
  int getMove(void);
  bool play(const int x, const int y);
};





