#include <vector>
using namespace std;
#include "stack-template.h"

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
template<class Element, class Solution>
class DFS
{
protected:
  Solution solution;
public:
  virtual bool terminal() = 0;
  virtual void process() = 0;
  virtual vector<Element> divide() = 0;
  virtual Solution getSolution() const {return solution;};
};
template <class ToReduce, class Result>
class Reducer
{
protected:
  Result result;
public:
  virtual void reduce(ToReduce &r) = 0;
  Result getResult() {return result;}
};
