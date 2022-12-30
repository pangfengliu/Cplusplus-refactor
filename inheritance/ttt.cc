#include <iostream>
#include <cassert>
#include "ttt.h"
using namespace std;

//--TicTacToe--
TicTacToe::TicTacToe(void): Board(SIZE, SIZE, -1)
{
  move = 0;
  rowSum = colSum = vector<vector<int>>(2, vector<int> (SIZE, 0));
  cross1 = cross2 = vector<int>(2, 0);
}
//--playerToMove--
int TicTacToe::playerToMove() const
{
  return (move % 2);
}
//--playerMoved--
int TicTacToe::playerMoved() const
{
  return (1 - playerToMove());
}
//--getMove--
int TicTacToe::getMove() const
{
  return move;
}
//--play--
bool TicTacToe::play(const int row, const int col)
{
  assert(contain({row, col}));
  if (get(Position(row, col)) != -1) 
    return false;
  else {
    int player = playerToMove();
    set(Position(row, col), player);
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
bool TicTacToe::checkRowCol(void) const
{
  int player = playerMoved();
  for (int i = 0; i < SIZE; i++) 
    if (rowSum[player][i] == SIZE || colSum[player][i] == SIZE)
      return true;
  return false;
}
//--CheckDiag--
bool TicTacToe::checkDiag(void) const
{
  int player = playerMoved();
  return (cross1[player] == SIZE || cross2[player] == SIZE);
}
//--win--
// Is this a win for playerMoved
bool TicTacToe::win(void) const
{
  return (checkRowCol() || checkDiag());
}

