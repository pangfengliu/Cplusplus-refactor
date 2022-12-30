#include <iostream>
#include <iomanip>
using namespace std;

main()
{
  int R, C;
  cin >> R >> C;
  bool mirror[R][C];
  for (int row = 0; row < R; row++)
    for (int col = 0; col < C; col++) {
      int temp;
      cin >> temp;
      mirror[row][col] = (temp == 1);
    }
  int drow[4] {1, 0, -1, 0};
  int dcol[4] {0, -1, 0, 1};
  int newDir[4] {1, 0, 3, 2};
  int row, col, dir;
  for (int i = 0; i < 2 * (R + C); i++) {
    if (i < C) {
      dir = 0; row = 0; col = i;
    } else if (i < C + R) {
      dir = 1; row = i - C; col = C - 1;
    } else if (i < 2 * C + R) {
      dir = 2; row = R - 1;
      col = 2 * C + R - i - 1;
    } else {
      dir = 3; row = 2 * R + 2 * C - i - 1;
      col = 0;
    }
    while (row >= 0 && row < R && col >= 0 && col < C) {
      if (mirror[row][col]) 
	dir = newDir[dir];
      row += drow[dir];
      col += dcol[dir];
    }
    if (row < 0)
      cout << col << ' ';
    else if (col >= C)
      cout << C + row << ' ';
    else if (row >= R)
      cout << C + R + (C - col) - 1 << ' ';
    else
      cout << 2 * C + R + (R - row) - 1 << ' ';
  }
  cout << endl;
}
