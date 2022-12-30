#include <iostream>
#include <cassert>
#include "ttt.h"

using namespace std;

//--init--
void init(TicTacToe &ttt)
{
  ttt.move = 0;
  for (int row = 0; row < SIZE; row++)
    for (int col = 0; col < SIZE; col++)
      ttt.board[row][col] = -1;
  for (int p = 0; p < 2; p++) {
    ttt.cross1[p] = ttt.cross2[p] = 0;
    for (int i = 0; i < SIZE; i++)
      ttt.rowSum[p][i] = ttt.colSum[p][i] = 0;
  }
}
//--playerToMove--
int playerToMove(const TicTacToe &ttt)
{
  return (ttt.move % 2);
}
//--playerMoved--
int playerMoved(const TicTacToe &ttt)
{
  return (1 - playerToMove(ttt));
}
//--play--
// play at (row, col). return true if success
bool play(TicTacToe &ttt, const int row, const int col)
{
  assert(row >= 0 && row < SIZE && col >= 0 && col < SIZE);
  if (ttt.board[row][col] != -1) 
    return false;
  else {
    int player {playerToMove(ttt)};
    ttt.board[row][col] = player;
    ttt.rowSum[player][row]++;
    ttt.colSum[player][col]++;
    if (row == col)
      ttt.cross1[player]++;
    if (row + col == SIZE - 1)
      ttt.cross2[player]++;
    ttt.move++;
    return true;
  }
}
//--checkRow--
bool checkRow(const TicTacToe &ttt)
{
  for (int i = 0; i < SIZE; i++)
    if (ttt.rowSum[playerMoved(ttt)][i] == SIZE)
      return true;
  return false;
}
//--checkCol--
bool checkCol(const TicTacToe &ttt)
{
  for (int i = 0; i < SIZE; i++)
    if (ttt.colSum[playerMoved(ttt)][i] == SIZE)
      return true;
  return false;
}
//--CheckDiag--
bool checkDiag(const TicTacToe &ttt)
{
  int player {playerMoved(ttt)};
  return (ttt.cross1[player]==SIZE || ttt.cross2[player]==SIZE);
}
//--win--
// Is this a win for playerMoved
bool win(const TicTacToe &ttt)
{
  return (checkRow(ttt) || checkCol(ttt) || checkDiag(ttt));
}
//--main--
int main(void)
{
  TicTacToe ttt;
  init(ttt);
  for (int i = 0; i < SIZE * SIZE && !win(ttt); i++) {
    int row, col;
    cin >> row >> col;
    if (!play(ttt, row, col)) {
      cout << "bad move" << row << ' ' << col;
      exit(-1);
    }
  }
  if (win(ttt))
    cout << "player " << playerMoved(ttt) << " wins after "
	 << ttt.move << " moves.\n";
  else
    cout << "It is a tie.\n";
  return 0;
}
//--end--
