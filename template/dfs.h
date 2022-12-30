#include <vector>
#include "stack-template.h"

template<class Element>
void dfs(Element first)
{
  Stack<Element> stack;
  stack.push(first);
  while (!stack.empty()) {
    Element e {stack.pop()};
    if (e.terminal())
      e.process();
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
