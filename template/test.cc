#include "linked-list-template.h"

int main()
{
  ListNode<int> node(10, nullptr);

  LinkedList<int> list;
  list.insertHead(10);
  list.insertHead(2);
  list.insertHead(5);

  cout << list.deleteHead() << endl;
  
  return 0;
}
