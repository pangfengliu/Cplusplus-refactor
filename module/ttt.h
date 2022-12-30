#include <vector>
using namespace std;
#define SIZE 3

struct TicTacToe {
  int move;
  vector<vector<int>> board;
  vector<vector<int>> rowSum;
  vector<vector<int>> colSum;
  vector<int> cross1;
  vector<int> cross2;
};
bool win(const TicTacToe &ttt);
void init(TicTacToe &ttt);
int playerToMove(const TicTacToe &ttt);
int playerMoved(const TicTacToe &ttt);
bool play(TicTacToe &ttt, const int x, const int y);





