#include "linked-list.h"
using namespace pangfeng;

class Stack: public LinkedList
{
 public:
  bool empty() {return head == nullptr;}
  void push(int k) {insertHead(k);}
  int pop() {return(deleteHead());};
};
