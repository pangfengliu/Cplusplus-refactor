#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define QUEENS 8

void placeQueen(vector<int> &queenPos)
{
  auto size {queenPos.size()};
  if (size == QUEENS) {
    for (auto pos : queenPos)
      cout << pos;
    cout << endl;
    return;
  }

  for (int k = 0; k < QUEENS; k++) {
    bool conflict {false};
    for (auto j = 0; j < size && !conflict; j++)
      if (queenPos[j] == k || abs(k - queenPos[j]) == (size - j))
	conflict = true;
    if (!conflict) {
      queenPos.push_back(k);
      placeQueen(queenPos);
      queenPos.pop_back();
    }
  }
}

int main(void)
{
  vector<int> queenPos;
  placeQueen(queenPos);
  return 0;
}
