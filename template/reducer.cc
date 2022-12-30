#include <vector>
using namespace std;

#include "stack.h"

template<class Element, class Reducer>
void dfs(Element first, Reducer &reducer)
{
  Stack<Element> stack;
  stack.push(first);
  while (!stack.empty()) {
    Element e {stack.pop()};
    if (e.terminal()) {
      e.process();
      reducer.reduce(e);
    }
    else {
      vector<Element> elements {e.divide()};
      for (auto spwaned : elements) 
	stack.push(spwaned);
    }
  }
}

template<class Element>
class DFS
{
 public:
  virtual bool terminal() = 0;
  virtual void process() = 0;
  virtual vector<Element> divide() = 0;
};

class Fib: public DFS<Fib>
{
  int term;
public:
  int answer;
  Fib(int n): term(n) {};
  bool terminal() override
  {return (term == 1 || term == 0);}
  void process() override {answer = term;}
  vector<Fib> divide() override {
    vector<Fib> toSpawn;
    toSpawn.push_back(term - 1);
    toSpawn.push_back(term - 2);
    return toSpawn;
  }
};

class MoveStones: public DFS<MoveStones>
{
private:
  int number;
  string source, destination, buffer;
public:
  string answer;
  MoveStones(int n, string s, string d, string b):
    number(n), source(s), destination(d), buffer(b)
  {};
  bool terminal() override {return (number == 1);}
  void process() override {
    answer = "from " + source + " to " + destination + "\n";
  }
  vector <MoveStones> divide() override
  {
    vector <MoveStones> moves;
    moves.push_back
      (MoveStones(number - 1,
		  buffer, destination, source));
    moves.push_back
      (MoveStones(1,
		  source, destination, buffer));
    moves.push_back
      (MoveStones(number - 1,
		  source, buffer, destination));
    return moves;
  }
};

#define MAXQUEENS 8

class Queens: public DFS<Queens>
{
private:
  int size;
  int level;
  int pos[MAXQUEENS];
  void setq(int k) {pos[level] = k; level++;}
  bool conflict(int k);
public:
 Queens(int s = 8, int n = 0): size(s), level(n)
  {};
  vector<int> answer;
  int getLevel() {return level;}
  bool terminal() override {return level == size;}
  void process() override; 
  vector<Queens> divide() override;
};

bool Queens::conflict(int k)
{
  for (int j = 0; j < level; j++) 
    if (pos[j] == k || 
	(abs(k - pos[j]) == abs(level - j)))
      return true;
  return false;
}

void Queens::process()
{
  for (int k = 0; k < size; k++)
    answer.push_back(pos[k]);
}

vector<Queens> Queens::divide()
{
  vector<Queens> siblings;
  for (int k = 0; k < size; k++) {
    if (!conflict(k)) {
      Queens next = *this;	
      next.setq(k);
      siblings.push_back(next);
    }
  }
  return siblings;
}

template <class ToReduce>
class Reducer
{
protected:
  decltype(ToReduce::answer) reduction;
public:
  virtual void reduce(ToReduce &toreduce) = 0;
  decltype(ToReduce::answer) getReduction()
  {return reduction;}
};

class MoveReducer: public Reducer<MoveStones>
{
public:
  MoveReducer() {reduction = "";}  
  void reduce(MoveStones &toreduce) override {
    reduction += toreduce.answer;
  }
};

class FibReducer: public Reducer<Fib>
{
public:
  FibReducer() {reduction = 0;}  
  void reduce(Fib &toreduce) override
  {reduction += toreduce.answer;}
};

class QueensReducer: public Reducer<Queens>
{
public:
  QueensReducer() {}  
  void reduce(Queens &toreduce) override {
    for (auto ans : toreduce.answer)
      reduction.push_back(ans);}
};

int main()
{
  FibReducer fibReducer;
  dfs(Fib(5), fibReducer);
  cout << fibReducer.getReduction() << endl;

  MoveReducer stoneReducer;
  dfs(MoveStones(5, "A", "C", "B"), stoneReducer);
  cout << stoneReducer.getReduction() << endl;

  QueensReducer queensReducer;
  dfs(Queens(8, 0), queensReducer);
  auto results {queensReducer.getReduction()};
  for (int i = 0; i < results.size(); i++) 
    cout << results[i] << (i % 8 == 7? '\n' : ' ');
  
  return 0;
}
  
