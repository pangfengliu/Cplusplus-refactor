#include "dfs-reducer.h"

class MoveStones: public DFS<MoveStones>
{
private:
  int number;
  string source, dest, buffer;
public:
  string answer;
  MoveStones(int n, string s, string d, string b):
    number(n), source(s), dest(d), buffer(b) {};
  bool terminal() override {return (number == 1);}
  void process() override {
    answer = "from " + source + " to " + dest + "\n";
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
class MoveReducer: public Reducer<MoveStones>
{
public:
  MoveReducer() {result = "";}  
  void reduce(MoveStones &toreduce) override {
    result += toreduce.answer;
  }
};

