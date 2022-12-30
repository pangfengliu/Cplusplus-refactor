#include "dfs-reducer.h"

class Fib: public DFS<Fib>
{
  int n;
public:
  int answer;
  Fib(int i): n(i) {};
  bool terminal() override
  {return (n == 1 || n == 0);}
  void process() override {answer = n;}
  vector<Fib> divide() override {
    vector<Fib> toSpawn;
    toSpawn.push_back(n - 1);
    toSpawn.push_back(n - 2);
    return toSpawn;
  }
};
class FibReducer: public Reducer<Fib>
{
public:
  FibReducer() {result = 0;}  
  void reduce(Fib &toreduce) override {result += toreduce.answer;}
};
