#include "linked-list-template.h"

template<class Key>
class Stack: public LinkedList<Key>
{
 public:
  bool empty() {return this->head == nullptr;};
  void push(Key k) {this->insertHead(k);};
  Key pop() {return(this->deleteHead());};
};
