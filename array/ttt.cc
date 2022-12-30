#include <iostream>
#include <cassert>
using namespace std;

#define SIZE 3
#define PLAYERS 2
main()
{
  int board[SIZE][SIZE];
  for (int row = 0; row < SIZE; row++)
    for (int col = 0; col < SIZE; col++)
      board[row][col] = -1;
  int rowSum[PLAYERS][SIZE];
  int colSum[PLAYERS][SIZE];
  int cross1[PLAYERS];
  int cross2[PLAYERS];
  for (int p = 0; p < PLAYERS; p++) {
    cross1[p] = cross2[p] = 0;
    for (int i = 0; i < SIZE; i++)
      rowSum[p][i] = colSum[p][i] = 0;
  }

  int move {0};
  bool win {false};
  int player = {0};
  for (int i = 0; i < SIZE * SIZE; i++) {
    int row, col;
    cin >> row >> col;
    assert(row >= 0 && row < SIZE && col >= 0 && col < SIZE);
    assert(board[row][col] == -1);
    board[row][col] = player;
    rowSum[player][row]++;
    colSum[player][col]++;
    if (row == col)
      cross1[player]++;
    if (row + col == SIZE - 1)
      cross2[player]++;
    for (int i = 0; i < SIZE; i++) {
      if (rowSum[player][i] == SIZE || colSum[player][i] == SIZE)
	win = true;
    }
    if (cross1[player] == SIZE || cross2[player] == SIZE)
      win = true;
    move++;
    if (win)
      break;
    player = 1 - player;
  }
  if (win)
    cout << "player " << player << " wins after "
	 << move << " moves.\n";
  else
    cout << "It is a tie.\n";
  return 0;
}

