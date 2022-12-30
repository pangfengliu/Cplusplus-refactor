#include <iostream>
#include <cassert>
using namespace std;

main()
{
  int n, k;
  cin >> n >> k;
  assert(n >= 1 && k > 0);
  int from = 0, to = 1;
  bool life[2][n][n];
  for (int row = 0; row < n; row++)
    for (int col = 0; col < n; col++) {
      int temp;
      cin >> temp;
      life[from][row][col] = (temp == 1);
    }
  for (int iter = 0; iter < k ; iter++) {
    for (int row = 0; row < n; row++)
      for (int col = 0; col < n; col++) {
	int neighbor = 0;
	for (int drow = -1; drow <= 1; drow++)
	  for (int dcol = -1; dcol <= 1; dcol++)
	    if (!(drow == 0 && dcol == 0)) {
	      int nRow = row + drow;
	      int nCol = col + dcol;
	      if (nRow >= 0 && nRow < n &&
		  nCol >= 0 && nCol < n &&
		  life[from][nRow][nCol])
		neighbor++;
	    }
	if (life[from][row][col])
	  life[to][row][col] =
	    (neighbor == 2 || neighbor == 3);
	else       // life[row][col] == false 
	  life[to][row][col] = (neighbor == 3);
      }
    from = (from == 1)? 0 : 1;
    to = (to == 1)? 0 : 1;
  }
  for (int row = 0; row < n; row++)
    for (int col = 0; col < n; col++) {
      if (col == n - 1)
	cout << life[from][row][col] << endl;
      else
	cout << life[from][row][col] << " ";
    }
}
