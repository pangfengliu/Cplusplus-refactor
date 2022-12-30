#include <iostream>
#include <vector>
#include "linked-list.h"

using namespace std;

//
void LinkedList::insertHead(int key)
{
  ListNode *oldHead {head};
  head = new ListNode(key, oldHead);  
}

int LinkedList::deleteHead()
{
  ListNode *newHead {head->getNext()};
  int key {head->getData()};
  if (head != nullptr)
    delete head;
  head = newHead;
  return key;
}

//--LinkedList::LinkedList--
LinkedList::LinkedList(vector<int> keys): head(nullptr)
{
  for (auto key : keys) 
    insertHead(key);
}
//--LinkedList::print--
void LinkedList::print() const
{
  for (ListNode *node = head; node != nullptr;
       node = node->getNext()) {
    node->print();
    cout << " ";
  }
  cout << endl;
}

LinkedList::~LinkedList()
{
  ListNode *node {head};
  while (node != nullptr) {
    ListNode *next = node->getNext();
    cout << "delete node with " << node->getData() << endl;
    delete node;
    node = next;
  }
}

