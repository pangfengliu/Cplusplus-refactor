#include "paper-stack.h"

#define BOTTOM 100000

int main()
{
  int w, h;
  vector<Paper> stack; 
  while (cin >> w >> h)
    stack.push_back(Paper(w, h));
  PaperStack paperStack(stack);
  Solution bestOne
    {paperStack.best(0, Paper(BOTTOM, BOTTOM), Solution(0, 0))};
  bestOne.print();
  return 0;
}
