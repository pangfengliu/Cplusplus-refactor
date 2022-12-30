#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#include "queen-dfs.h"

bool Queens::conflict(int k)
{
  int placed {pos.size()};
  for (decltype(placed) j = 0; j < placed; j++) 
    if (pos[j] == k || (abs(k - pos[j]) == (placed - j)))
      return true;
  return false;
}
void Queens::process()
{
  for (int k = 0; k < boardSize; k++)
    cout << pos[k]; 
  cout << endl;
}
vector<Queens> Queens::divide()
{
  vector<Queens> siblings;
  for (int k = 0; k < boardSize; k++) {
    if (!conflict(k)) {
      Queens next = *this;	
      next.append(k);
      siblings.push_back(next);
    }
  }
  return siblings;
}






