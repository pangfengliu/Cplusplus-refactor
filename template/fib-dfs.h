#include <vector>
using namespace std;
#include "dfs.h"

class Fib: public DFS<Fib>
{
 private:
  int n;
  static int sum;
 public:
  Fib(int i): n(i) {};
  static int getSum() {return sum;}
  bool terminal() override {return (n == 1 || n == 0);}
  void process() override {sum += n;}
  vector<Fib> divide() override {
    vector<Fib> toSpawn;
    toSpawn.push_back(n - 1);
    toSpawn.push_back(n - 2);
    return toSpawn;
  }
};
int Fib::sum {0};
