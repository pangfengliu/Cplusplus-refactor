#include <iostream>
#include <vector>
#include "linked-list-shared.h"

void LinkedList::insertHead(int key)
{
  shared_ptr<ListNode> node
    {make_shared<ListNode>(key, head)};
  head = node;
}
int LinkedList::deleteHead()
{
  int k = head->getKey();
  shared_ptr<ListNode> toDelete {head};
  head = toDelete->getNext();
  return k;
}
LinkedList::LinkedList(vector<int> keys): head(nullptr)
{
  for (auto key : keys) 
    insertHead(key);
}
void LinkedList::printNode(const shared_ptr<ListNode> &node) const
{
  if (node == nullptr)
    return;
  cout << node->getKey() << " ";
  printNode(node->getNext());
}
void LinkedList::print() const
{
  printNode(head);
  cout << endl;
}


