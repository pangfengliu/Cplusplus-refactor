#include <iostream>
using namespace std;
#include "board.h"
#include "movement.h"

int main()
{
  int size;
  cin >> size;
  Board board(readCell(size, size));
  Movement circle(1, Position(size / 2, size / 2));
  board.printOne(circle.getPosition());
  for (int dist = 1; dist < size; dist++)
    for (int step = 0; step < ((dist == size - 1)? 3 : 2);
	 step++) {
      for (int i = 0; i < dist; i++) {
	circle.oneStep();
	board.printOne(circle.getPosition());
      }
      circle.changeDir();
    }
}
