#include <iostream>
using namespace std;
#include "board.h"
#include "movement.h"

//--main--
int main()
{
  int size;
  cin >> size;
  vector<vector<int>> cell = vector<vector<int>>
    (size, vector<int>(size));
  for (auto &row : cell)
    for (auto &number : row)
      cin >> number;

  Board board(cell);
  int center = size / 2;
  Movement movement(1, Position(center, center));
  board.print(movement.getPosition());
  for (int dist = 1; dist < size; dist++)
    for (int step = 0; step < ((dist == size - 1)? 3 : 2);
	 step++) {
      for (int i = 0; i < dist; i++) {
	movement.oneStep();
	board.print(movement.getPosition());
      }
      movement.changeDir();
    }
}
//--end--
