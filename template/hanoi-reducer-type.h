#include "dfs-reducer-type.h"

class MoveStones: public DFS<MoveStones, string>
{
private:
  int number;
  string source, dest, buffer;
public:
  MoveStones(int n, string s, string d, string b):
    number(n), source(s), dest(d), buffer(b) {};
  bool terminal() override {return (number == 1);}
  void process() override {
    solution = "from " + source + " to " + dest + "\n";
  }
  vector <MoveStones> divide() override
  {
    vector <MoveStones> moves;
    moves.push_back(MoveStones(number - 1, buffer, dest, source));
    moves.push_back(MoveStones(1, source, dest, buffer));
    moves.push_back(MoveStones(number - 1, source, buffer, dest));
    return moves;
  }
};
class MoveReducer: public Reducer<MoveStones, vector<string>>
{
public:
  MoveReducer() {}  
  void reduce(MoveStones &toreduce) override {
    result.push_back(toreduce.getSolution());
  }
};

