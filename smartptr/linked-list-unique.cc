#include <iostream>
#include <vector>
#include "linked-list-unique.h"

int LinkedList::deleteHead()
{
  int k = head->getKey();
  unique_ptr<ListNode> toDelete {move(head)};
  head = move(toDelete->getNext());
  return k;
}
void LinkedList::insertHead(int key)
{
  unique_ptr<ListNode> oldHead {move(head)};
  unique_ptr<ListNode> newhead {new ListNode(key, oldHead)};
  head = move(newhead);
}
LinkedList::LinkedList(vector<int> keys): head(nullptr)
{
  for (auto key : keys) 
    insertHead(key);
}
void LinkedList::
printNode(const unique_ptr<ListNode> &node) const
{
  if (node == nullptr)
    return;
  cout << node->getKey() << ' ';
  printNode(node->getNext());
}
void LinkedList::print() const
{
  printNode(head);
  cout << endl;
}


