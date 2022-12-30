#include <iostream>
using namespace std;
#include "life.h"

//--main--
int main()
{
  int iteration;
  cin >> iteration;
  Life life;
  initLife(life);
  for (int iter = 0; iter < iteration; iter++) {
    evolve(life);
    changeDir(life);
  }
  printLife(life);
  return 0;
}
//-end--
