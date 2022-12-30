#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

#define QUEENS 8

void placeQueen(int i, int queenPos[QUEENS])
{
  for (int k = 0; k < i; k++)
    cout << queenPos[k];
  cout << endl;
  
  if (i == QUEENS)
    exit(0);
  for (int k = 0; k < QUEENS; k++) {
    bool conflict {false};
    for (int j = 0; j < i && !conflict; j++)
      if (queenPos[j] == k || 
	  abs(k - queenPos[j]) == (i - j))
	conflict = true;
    if (!conflict) {
      queenPos[i] = k;
      placeQueen(i + 1, queenPos);
    }
  }
}

int main(void)
{
  int queenPos[QUEENS];
  placeQueen(0, queenPos);
  return 0;
}
