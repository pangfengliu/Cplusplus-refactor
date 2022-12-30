#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#include "dfs.h"

class Queens: public DFS<Queens>
{
private:
  int boardSize;
  vector<int> pos;
  void append(int k) {pos.push_back(k);}
  bool conflict(int k);
public:
 Queens(int s = 8): boardSize(s) {};
  bool terminal() override {return (pos.size() == boardSize);}
  void process() override; 
  vector<Queens> divide() override;
};
