#include <iostream>
using namespace std;

main()
{
  int n;
  cin >> n;
  int array[n][n];
  for (int r = 0; r < n; r++)
    for (int c = 0; c < n; c++)
      cin >> array[r][c];

  int drow[4] {1, 0, -1, 0};
  int dcol[4] {0, -1, 0, 1};
  int newDir[4] {1, 2, 3, 0};
  int row {n / 2};
  int col {n / 2};
  int dir {1};
  cout << array[row][col] << ' ';
  for (int dist = 1; dist < n; dist++)
    for (int step = 0; step < ((dist == n - 1)? 3 : 2); step++) {
      for (int i = 0; i < dist; i++) {
	row += drow[dir];
	col += dcol[dir];
	cout << array[row][col] << ' ';
      }
      dir = newDir[dir];
    }
  cout << endl;
}
