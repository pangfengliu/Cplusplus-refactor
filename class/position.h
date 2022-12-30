#ifndef POSITION_H
#define POSITION_H
class Position {
 private:
  int row;
  int col;
 public:
  Position(const int r = 0, const int c = 0);
  void setRow(const int r);
  void setCol(const int c);
  int getRow(void) const;
  int getCol(void) const;
};
#endif

