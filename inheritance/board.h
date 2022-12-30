#include "position.h"
#include <vector>
using namespace std;

vector<vector<int>> readCell(int R, int C);

class Board {
 private:
  vector<vector<int>> cell;
 public:
  Board(vector<vector<int>> c):
  cell(c) {}
  Board(const int r, const int c, const int v) {
    cell=vector<vector<int>>(r, vector<int>(c, v));
  }
  int getR() const {return cell.size();}
  int getC() const {return cell[0].size();};
  void set(const Position &pos, int v)
  {cell[pos.getRow()][pos.getCol()] = v;};
  int get(const Position &pos) const
  {return cell[pos.getRow()][pos.getCol()];};
  bool contain(const Position &pos) const;
  void printOne(const Position &pos) const;
  void printAll() const;
};
