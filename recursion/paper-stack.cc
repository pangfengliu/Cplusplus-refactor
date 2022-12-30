#include <iostream>
using namespace std;
#include "paper-stack.h"

Solution PaperStack::
best(const unsigned int index, const Paper &top,
     const Solution &solution) 
{
  if (index >= stack.size())
    return solution;
  if (stack[index].onTop(top)) {
    Solution placed(solution.getLayer() + 1,
		    solution.getSum() + index);
    Solution tryPlaced = best(index + 1, stack[index], placed);
    return tryPlaced.better(best(index + 1, top, solution));
  } else
    return (best(index + 1, top, solution));
} 

