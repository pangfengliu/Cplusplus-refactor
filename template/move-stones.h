#include <iostream>
using namespace std;
#include <vector>

class MoveStones
{
  int number;
  char source, dest, buffer;
 public:
 MoveStones(int n, char s, char d, char b):
  number(n), source(s), dest(d), buffer(b) {};
  int getNumber() {return number;};
  char getFrom() {return source;};
  char getTo() {return dest;};
  vector <MoveStones> divide();
};
