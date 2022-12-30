#include <iostream>
using namespace std;

#include "maze.h"

int main()
{
  int row, col;
  cin >> row >> col;
  vector<vector<int>> cell(row, vector<int>(col));
  for (auto &row : cell)
    for (auto &number : row)
      cin >> number;
  int startRow, startCol, endRow, endCol;
  cin >> startRow >> startCol >> endRow >> endCol;
  Position current(startRow, startCol);
  Position end(endRow, endCol);

  Maze maze(cell, current, end);
  maze.go(2);
  return 0;
}
