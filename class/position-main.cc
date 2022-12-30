#include <iostream>
using namespace std;
#include "position.h"

int main()
{
  Position a(-3, 2);
  Position b(2, -6);
  a.setRow(a.getRow() + 4);
  cout << "a is [" << a.getRow() << "][" << a.getCol() << "]\n";
  cout << "b is [" << b.getRow() << "][" << b.getCol() << "]\n";
}



