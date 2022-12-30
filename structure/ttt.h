#define SIZE 3

struct TicTacToe {
  int board[SIZE][SIZE];
  int move;
  int rowSum[2][SIZE];
  int colSum[2][SIZE];
  int cross1[2];
  int cross2[2];
};

