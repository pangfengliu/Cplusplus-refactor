#include <iostream>
using namespace std;
#include "ttt.h"

//--main--
int main(void)
{
  TicTacToe ttt;
  ttt.init();
  for (int i = 0; i < SIZE * SIZE && !ttt.win(); i++) {
    int row, col;
    cin >> row >> col;
    if (!ttt.play(row, col)) {
      cout << "bad move" << row << " " << col;
      exit(-1);
    }
  }
  if (ttt.win())
    cout << "player " << ttt.playerMoved() << " wins after "
	 << ttt.getMove() << " moves.\n";
  else
    cout << "It is a tie.\n";
  return 0;
}
//--end--
