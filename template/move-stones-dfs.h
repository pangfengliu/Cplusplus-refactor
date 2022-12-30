#include <iostream>
#include <vector>
using namespace std;
#include "dfs.h"

class MoveStones: public DFS<MoveStones>
{
private:
  int number;
  char source, dest, buffer;
public:
  MoveStones(int n, char s, char d, char b):
    number(n), source(s), dest(d), buffer(b) {};
  bool terminal() override {return (number == 1);}
  void process() override;
  vector <MoveStones> divide() override;
};
