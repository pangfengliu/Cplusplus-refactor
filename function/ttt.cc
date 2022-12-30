#include <iostream>
#include <cassert>

#define SIZE 3
#define PLAYERS 2

using namespace std;
//--init--
void init(int board[SIZE][SIZE], int rowSum[PLAYERS][SIZE],
	  int colSum[PLAYERS][SIZE], int cross1[PLAYERS],
	  int cross2[PLAYERS])
{
  for (int row = 0; row < SIZE; row++)
    for (int col = 0; col < SIZE; col++)
      board[row][col] = -1;
  for (int p = 0; p < PLAYERS; p++) {
    cross1[p] = cross2[p] = 0;
    for (int i = 0; i < SIZE; i++)
      rowSum[p][i] = colSum[p][i] = 0;
  }
}
//--playerToMove--
int playerToMove(const int move)
{
  return (move % PLAYERS);
}
//--playerMoved--
int playerMoved(const int move)
{
  return (1 - playerToMove(move));
}
//--play--
bool play(int board[SIZE][SIZE], const int move,
	  const int row, const int col,
	  int rowSum[PLAYERS][SIZE], int colSum[PLAYERS][SIZE],
	  int cross1[PLAYERS], int cross2[PLAYERS])
{
  assert(row >= 0 && row < SIZE &&
	 col >= 0 && col < SIZE);
  if (board[row][col] != -1) 
    return false;
  else {
    int player {playerToMove(move)};
    board[row][col] = player;
    rowSum[player][row]++;
    colSum[player][col]++;
    if (row == col)
      cross1[player]++;
    if (row + col == SIZE - 1)
      cross2[player]++;
    return true;
  }
}
//--checkRow--
bool checkRowCol(const int move, const int sum[PLAYERS][SIZE])
{
  int player {playerMoved(move)};
  for (int i = 0; i < SIZE; i++) 
    if (sum[player][i] == SIZE)
      return true;
  return false;
}
//--CheckDiag--
bool checkDiag(const int move, const int cross1[PLAYERS],
	       const int cross2[PLAYERS])
{
  int player = playerMoved(move);
  return (cross1[player] == SIZE || cross2[player] == SIZE);
}
//--win--
bool win(const int move, int rowSum[PLAYERS][SIZE],
	 int colSum[PLAYERS][SIZE], int cross1[PLAYERS],
	 int cross2[PLAYERS])
{
  return (checkRowCol(move, rowSum) || checkRowCol(move, colSum)
	  || checkDiag(move, cross1, cross2));
}
//--main--
int main(void)
{
  int board[SIZE][SIZE];
  int rowSum[PLAYERS][SIZE];
  int colSum[PLAYERS][SIZE];
  int cross1[PLAYERS];
  int cross2[PLAYERS];
  init(board, rowSum, colSum, cross1, cross2);
  int move = 0;
  
  for (int i = 0; i < SIZE * SIZE && !win(move, rowSum, colSum,
		 cross1, cross2); i++) {
    int row, col;
    cin >> row >> col;
    if (!play(board, move, row, col, rowSum,
	      colSum, cross1, cross2)) {
      cout << "bad move" << row << " " << col;
      return -1;
    }
    move++;
  }
  if (win(move, rowSum, colSum, cross1, cross2))
    cout << "player " << playerMoved(move)
	 << " wins after " << move << " moves.\n";
  else
    cout << "It is a tie.\n";
  return 0;
}
//--end--
