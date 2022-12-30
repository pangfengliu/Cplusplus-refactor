#include <iostream>
#include <cassert>
#include "ttt.h"
using namespace std;

//--init--
void init(TicTacToe &ttt)
{
  ttt.move = 0;
  ttt.board = vector<vector<int>>(SIZE,vector<int>(SIZE,-1));
  ttt.rowSum = ttt.colSum =
    vector<vector<int>>(2, vector<int>(SIZE, 0));
  ttt.cross1 = ttt.cross2 = vector<int>(2, 0);
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
    int player = playerToMove(ttt);
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
//--checkRowCol--
bool checkRowCol(const TicTacToe &ttt)
{
  int player {playerMoved(ttt)};
  for (int sum : ttt.rowSum[player])
    if (sum == SIZE)
      return true;
  for (int sum : ttt.colSum[player])
    if (sum == SIZE)
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
  return (checkRowCol(ttt) || checkDiag(ttt));
}

