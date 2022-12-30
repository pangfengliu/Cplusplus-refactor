#include <iostream>
using namespace std;
#include "life.h"

//--initLife--
void initLife(Life &life)
{
  cin >> life.size;
  life.cellB = life.cellA = vector<vector<int>>
    (life.size, vector<int>(life.size));
  for (auto &row : life.cellA)
    for (auto &number : row) 
      cin >> number;
}
//--neighborNum--
int neighborNum(const Life &life,
		const int row, const int col)
{
  int neighbor {0};
  for (int drow = -1; drow <= 1; drow++)
    for (int dcol = -1; dcol <= 1; dcol++)
      if (!(drow == 0 && dcol == 0)) {
	int r {row + drow};
	int c {col + dcol};
	if (r >= 0 && r < life.size && c >= 0 && c < life.size &&
	    (life.from[r][c] == 1))
	  neighbor++;
      }
  return neighbor;
}
//--evolve--
void evolve(Life &life)
{
  for (int row = 0; row < life.size; row++)
    for (int col = 0; col < life.size; col++) {
      int neighbor = neighborNum(life, row, col);
      if (life.from[row][col] == 1)
	life.to[row][col] = (neighbor==2 || neighbor==3)? 1 : 0;
      else       // life.from[row][col] == false 
	life.to[row][col] = (neighbor == 3)? 1 : 0;
    }
}
//--changeDir--
void changeDir(Life &life)
{
  auto temp {life.from};
  life.from = life.to;
  life.to = temp;
}
//--printLife--
void printLife(const Life &life)
{
  for (int row = 0; row < life.size; row++)
    for (int col = 0; col < life.size; col++) {
      if (col == life.size - 1)
	cout << life.from[row][col] << endl;
      else
	cout << life.from[row][col] << ' ';
    }
}
