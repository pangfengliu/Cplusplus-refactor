#include <iostream>
using namespace std;
#include "board.h"

//--readCell--
vector<vector<int>> readCell(int R, int C)
{
  vector<vector<int>> cell {vector<vector<int>>(R, vector<int>(C))};
  for (auto &row : cell)
    for (auto &number : row)
      cin >> number;
  return cell;
}
//--printOne--
void Board::printOne(const Position &pos) const
{
  cout << cell[pos.getRow()][pos.getCol()] << ' ';
}
//--printAll--
void Board::printAll() const
{
  for (auto &row : cell) {
    for (auto &number : row)
      cout << number << " ";
    cout << endl;
  }
}
//--contain--
bool Board::contain(const Position &pos) const
{
  auto r {pos.getRow()};
  auto c {pos.getCol()};
  return(r >= 0 && r < getR() && c >= 0 && c < getC());
}
