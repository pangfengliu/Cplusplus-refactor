#include <iostream>
using namespace std;
#include "stack-template.h"

int main()
{
  string input;
  while (cin >> input) {
    Stack<char> stack;
    bool balanced {true};
    auto n {input.length()};
    for (decltype(n) i = 0; i < n && balanced; i++) 
      switch (input[i]) {
      case '(': case '[': case '{':
	stack.push(input[i]);
	break;
      case ')':
	balanced = stack.empty()? false : (stack.pop() == '(');
	break;
      case ']':
	balanced = stack.empty()? false : (stack.pop() == '[');
	break;
      case '}':
	balanced = stack.empty()? false : (stack.pop() == '{');
	break;
      default: balanced = false;
      }
    if (balanced && stack.empty())
      cout << "balanced" << endl;
    else
      cout << "imbalanced" << endl;
  }
  return 0;
}
