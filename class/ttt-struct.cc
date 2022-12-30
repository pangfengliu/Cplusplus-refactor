#include <iostream>
#include <cassert>
#include "ttt-struct.h"
using namespace std;

//--init--
void TicTacToe::init()
{
  move = 0;
  for (int row = 0; row < SIZE; row++)
    for (int col = 0; col < SIZE; col++)
      board[row][col] = -1;
  for (int p = 0; p < 2; p++) {
    cross1[p] = cross2[p] = 0;
    for (int i = 0; i < SIZE; i++)
      rowSum[p][i] = colSum[p][i] = 0;
  }
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
  for (int i = 0; i < SIZE; i++) 
    if (rowSum[player][i] == SIZE || colSum[player][i] == SIZE)
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

