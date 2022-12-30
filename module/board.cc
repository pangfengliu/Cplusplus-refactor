#include <iostream>
using namespace std;
#include "board.h"

//--initBoard--
void initBoard(Board &board)
{
  cin >> board.size;
  board.cell = vector<vector<int>>
    (board.size, vector<int>(board.size));
  for (auto &row : board.cell)
    for (auto &number : row)
      cin >> number;
}
//--printBoard--
void printBoard(const Board &board, const Position &pos)
{
  cout << board.cell[pos.row][pos.col] << ' ';
}

