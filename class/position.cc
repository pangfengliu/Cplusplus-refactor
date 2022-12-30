#include "position.h"

Position::Position(const int r, const int c): row{r}, col{c}
{
}
void Position::setRow(const int r)
{
  row = r;
}
void Position::setCol(const int c)
{
  col = c;
}
int Position::getRow(void) const
{
  return row;
}
int Position::getCol(void) const
{
  return col;
}

