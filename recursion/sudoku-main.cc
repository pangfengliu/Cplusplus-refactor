#include <iostream>
#include "sudoku.h"
int main()
{
  vector<vector<int>> board(BOARDSIZE, vector<int>(BOARDSIZE));
  for (auto &row : board)
    for (auto &number : row)
      cin >> number;
  Sudoku sudoku(board);
  sudoku.placeNumber(0);
  return 0;
}
