#include <iostream>
#include <cassert>
using namespace std;
#include "ttt.h"
//--main--
int main(void)
{
  TicTacToe ttt;
  init(ttt);
  for (int i = 0; i < SIZE * SIZE && !win(ttt); i++) {
    int row, col;
    cin >> row >> col;
    if (!play(ttt, row, col)) {
      cout << "bad move" << row << " " << col;
      exit(-1);
    }
  }
  if (win(ttt))
    cout << "player " << playerMoved(ttt) << " wins after "
	 << ttt.move << " moves.\n";
  else
    cout << "It is a tie.\n";
  return 0;
}
//--end--
