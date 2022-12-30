#include <iostream>
#include <iomanip>
using namespace std;

#include "sudoku.h"

//--Sudoku--
Sudoku::Sudoku(vector<vector<int>> c): Board(c)
{
  rowHas = colHas = blockHas = 
    vector<vector<bool>>(BOARDSIZE,vector<bool>(BOARDSIZE,false));
  for (int row = 0; row < BOARDSIZE; row++)
    for (int col = 0; col < BOARDSIZE; col++) 
      if (get(Position(row, col)) > 0)
	place(Position(row, col), get(Position(row, col)));
}
//--blockIndex--
int Sudoku::blockIndex(const Position &pos)
{
  auto blockRow {pos.getRow() / BLOCKSIZE};
  auto blockCol {pos.getCol() / BLOCKSIZE};
  return (blockRow * BLOCKSIZE + blockCol);
}
//--place--
void Sudoku::place(const Position &pos, const int number)
{
  auto row {pos.getRow()};
  auto col {pos.getCol()};
  set(pos, number);
  rowHas[row][number - 1] = true;
  colHas[col][number - 1] = true;
  blockHas[blockIndex(pos)][number - 1] = true;
}
//--remove
void Sudoku::remove(const Position &pos)
{
  auto row {pos.getRow()};
  auto col {pos.getCol()};
  auto number {get(pos)};
  set(pos, 0);
  rowHas[row][number - 1] = false;
  colHas[col][number - 1] = false;
  blockHas[blockIndex(pos)][number - 1] = false;
}
//--empty--
bool Sudoku::empty(const int level)
{
  int row {level / BOARDSIZE};
  int col {level % BOARDSIZE};
  return (get(Position(row, col)) == 0);
}
//--conflict--
bool Sudoku::conflict(const int level, const int test)
{
  int row {level / BOARDSIZE};
  int col {level % BOARDSIZE};
  return
    (rowHas[row][test - 1] || colHas[col][test - 1] ||
     blockHas[blockIndex(Position(row, col))][test - 1]);
}
//--placeNumber--
bool Sudoku::placeNumber(const int level)
{
  if (level == CELLS) {
    printAll();			
    return true;
  }
  if (!empty(level)) 
    return placeNumber(level + 1);
  int row = level / BOARDSIZE;
  int col = level % BOARDSIZE;
  for (int test = 1; test <= BOARDSIZE; test++) {
    if (!conflict(level, test)) {
      place(Position(row, col), test);
      if (placeNumber(level + 1))
	return true;
      remove(Position(row, col));
    }
  }
  return false;
}
//--end--
