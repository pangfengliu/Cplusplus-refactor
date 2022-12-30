#include <iostream>
using namespace std;
#include "sudoku.h"

int main()
{
  Sudoku sudoku(readCell(BOARDSIZE, BOARDSIZE));
  sudoku.placeNumber(0);
  return 0;
}
