#include <iostream>
using namespace std;
#include "stack-template.h"
#include "move-stones.h"

void hanoi(int n)
{
  Stack<MoveStones> moves;
  moves.push(MoveStones(n, 'A', 'C', 'B'));
  while (!moves.empty()) {
    MoveStones move {moves.pop()};
    if (move.getNumber() == 1)
      cout << "from " << move.getFrom()
	   << " to " << move.getTo() << endl;
    else {
      vector <MoveStones> newMoves {move.divide()};
      for (auto m : newMoves)
	moves.push(m);
    }
  }
}

int main()
{
  int n;
  cin >> n;
  hanoi(n);
  return 0;
}
  
