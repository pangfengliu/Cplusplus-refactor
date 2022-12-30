#include <iostream>
#include <cassert>
#include "ttt.h"
using namespace std;

//--init--
void TicTacToe::init()
{
  move = 0;
  board = vector<vector<int>>(SIZE,vector<int>(SIZE,-1));
  rowSum = colSum = vector<vector<int>>(2, vector<int> (SIZE, 0));
  cross1 = cross2 = vector<int>(2, 0);
}
//--playerToMove--
int TicTacToe::playerToMove()
{
  return (move % 2);
}
//--playerMoved--
int TicTacToe::playerMoved()
{
  return (1 - playerToMove());
}
//--getMove--
int TicTacToe::getMove()
{
  return move;
}
//--play--
bool TicTacToe::play(const int row, const int col)
{
  assert(row >= 0 && row < SIZE && col >= 0 && col < SIZE);
  if (board[row][col] != -1) 
    return false;
  else {
    int player {playerToMove()};
    board[row][col] = player;
    rowSum[player][row]++;
    colSum[player][col]++;
    if (row == col)
      cross1[player]++;
    if (row + col == SIZE - 1)
      cross2[player]++;
    move++;
    return true;
  }
}
//--checkRowCol--
bool TicTacToe::checkRowCol(void)
{
  int player {playerMoved()};
  for (int sum : rowSum[player])
    if (sum == SIZE)
      return true;
  for (int sum : colSum[player])
    if (sum == SIZE)
      return true;
  return false;
}
//--CheckDiag--
bool TicTacToe::checkDiag(void)
{
  int player {playerMoved()};
  return (cross1[player] == SIZE || cross2[player] == SIZE);
}
//--win--
// Is this a win for playerMoved
bool TicTacToe::win(void)
{
  return (checkRowCol() || checkDiag());
}

