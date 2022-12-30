#include <iostream>
using namespace std;

#include "maze.h"

int main()
{
  int row, col;
  cin >> row >> col;
  vector<vector<int>> status{readCell(row, col)};
  int startRow, startCol, endRow, endCol;
  cin >> startRow >> startCol >> endRow >> endCol;
  Position current = {startRow, startCol};
  Position end = {endRow, endCol};
  Maze maze(status, current, end);

  Maze *mazePtr = &(maze);
  Board *boardPtr = (Board *)(mazePtr);
  mazePtr->printAll();
  boardPtr->printAll();
  return 0;
}
