#include <cassert>
using namespace std;
#include "stack-template.h"
#include "queen.h"

int main(void)
{
  Stack<Queens> stack;
  int size;
  cin >> size;

  stack.push(Queens(size));
  while (!stack.empty()) {
    Queens q = stack.pop();
    if (q.placed() == size) 
      q.print();
    else 
      for (int k = 0; k < size; k++) {
	if (!q.conflict(k)) {
	  Queens next = q;	
	  next.append(k);
	  stack.push(next);
	}
      }
  }
  return 0;
}
