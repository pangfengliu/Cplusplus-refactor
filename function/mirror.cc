#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 100
//--init--
void init(bool mirror[SIZE][SIZE], int R, int C)
{
  for (int row = 0; row < R; row++)
    for (int col = 0; col < C; col++) {
      int temp;
      cin >> temp;
      mirror[row][col] = (temp == 1);
    }
}
//--setDir--
int setDir(int i, int R, int C)
{
  int bound[] {R, R + C, 2 * R + C, 2 * (R + C)};
  for (int dir = 0; dir < 4; dir++)
    if (i < bound[dir])
      return dir;
  cout << "invalid i " << i << endl;
  return -1;
}
//--setRow--
int setRow(int i, int R, int C)
{
  int initRow[] {0, i - C, R - 1,
      2 * R + 2 * C - i - 1};
  return initRow[setDir(i, R, C)];	
}
//--setCol--
int setCol(int i, int R, int C)
{
  int initCol[] {i, C - 1, 2 * C + R - i - 1, 0};
  return initCol[setDir(i, R, C)];
}
//--inRoom--
bool inRoom(int row, int col, int R, int C)
{
  return (row >= 0 && row < R && col >= 0 && col < C);
}
//--windowIndex--
int windowIndex(int row, int col, int R, int C)
{
  if (row < 0)
    return col;
  else if (col >= C)
    return C + row;
  else if (row >= R)
    return C + R + (C - col) - 1;
  else
    return 2 * C + R + (R - row) - 1;
}
//--main--
int main()
{
  int R, C;
  cin >> R >> C;

  bool mirror[SIZE][SIZE];
  init(mirror, R, C);

  int drow[4] {1, 0, -1, 0};
  int dcol[4] {0, -1, 0, 1};
  int newDir[4] {1, 0, 3, 2};

  for (int i = 0; i < 2 * (R + C); i++) {
    int row {setRow(i, R, C)};
    int col {setCol(i, R, C)};
    int dir {setDir(i, R, C)};

    while (inRoom(row, col, R, C)) {
      if (mirror[row][col]) 
	dir = newDir[dir];
      row += drow[dir];
      col += dcol[dir];
    }
    cout << windowIndex(row, col, R, C) << ' ';
  }
  cout << endl;
  return 0;
}
//--end
