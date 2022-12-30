#include <iostream>
using namespace std;

#include "circle.h"

//--initBoard--
void initBoard(Board &board)
{
  cin >> board.size;
  for (int r = 0; r < board.size; r++)
    for (int c = 0; c < board.size; c++)
      cin >> board.cell[r][c];
  board.movement.pos.row = board.movement.pos.col =
    board.size / 2;
  board.movement.dir = 1;
}
//--printBoard--
void printBoard(const Board &board)
{
  const Position &pos {board.movement.pos};
  cout << board.cell[pos.row][pos.col] << ' ';
}
//--changeDir--
void changeDir(Movement &movement)
{
  int newDir[] {1, 2, 3, 0};
  movement.dir = newDir[movement.dir];
}
//--oneStep--
void oneStep(Movement &movement)
{
  int drow[4] {1, 0, -1, 0};
  int dcol[4] {0, -1, 0, 1};
  movement.pos.row += drow[movement.dir];
  movement.pos.col += dcol[movement.dir];
}
//--main--
int main()
{
  Board board;
  initBoard(board);
  printBoard(board);
  for (int dist = 1; dist < board.size; dist++)
    for (int step = 0; step < ((dist == board.size - 1)? 3 : 2);
	 step++) {
      for (int i = 0; i < dist; i++) {
	oneStep(board.movement);
	printBoard(board);
      }
      changeDir(board.movement);
    }
}
//--end--
