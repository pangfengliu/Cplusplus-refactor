#include "paper.h"

Paper::Paper(const int w, const int h):
  width(w), height(h)
{
}

bool Paper::onTop(const Paper &p) const
{
  return
    ((width <= p.width && height <= p.height) ||
     (width <= p.height && height <= p.width));
}

