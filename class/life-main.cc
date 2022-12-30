#include <iostream>
using namespace std;
#include "life.h"

//--main--
int main()
{
  int iteration;
  cin >> iteration;
  int size;
  cin >> size;
  vector<vector<int>> cell = vector<vector<int>>
    (size, vector<int>(size));
  for (auto &row : cell)
    for (auto &number : row) 
      cin >> number;

  Life life(cell);
  for (int iter = 0; iter < iteration; iter++) {
    life.evolve();
    life.changeDir();
  }
  life.print();
  return 0;
}
//-end--
