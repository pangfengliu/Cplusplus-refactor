#include <iostream>
#include <utility>
using namespace std;
#include "life.h"

int main()
{
  int iteration, size;
  cin >> iteration >> size;
  Life lifeA(readCell(size, size));
  Life lifeB(size, 0);
  Life &from {lifeA}, &to {lifeB};
  for (int iter = 0; iter < iteration; iter++) {
    to.evolve(from);
    swap(from, to);
  }
  from.printAll();
  return 0;
}
