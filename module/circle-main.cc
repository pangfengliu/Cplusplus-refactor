#include <iostream>
using namespace std;
#include "board.h"
#include "movement.h"

//--main--
int main()
{
  Board board;
  initBoard(board);
  Movement movement {{board.size / 2, board.size / 2},
		     {1, 2, 3, 0}, 1};
  printBoard(board, movement.pos);
  for (int dist = 1; dist < board.size; dist++)
    for (int step = 0; step < ((dist == board.size - 1)? 3 : 2);
	 step++) {
      for (int i = 0; i < dist; i++) {
	oneStep(movement);
	printBoard(board, movement.pos);
      }
      changeDir(movement);
    }
}
//--end--
