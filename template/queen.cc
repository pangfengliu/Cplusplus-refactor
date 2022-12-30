#include <iostream>
#include <cmath>
using namespace std;
#include "queen.h"

void Queens::print() const
{
  for (int k = 0; k < size; k++)
    cout << pos[k]; 
  cout << endl;
}
bool Queens::conflict(int k) const
{
  int length = pos.size();
  for (int j = 0; j < length; j++)
    if (pos[j] == k || (abs(k - pos[j]) == abs(length - j)))
      return true;
  return false;
}


