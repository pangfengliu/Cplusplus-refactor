#include <iostream>
#include <vector>
#include "linked-list.h"

using namespace std;

template<class Key>
void LinkedList<Key>::insertHead(int key)
{
  ListNode *oldHead {head};
  head = new ListNode(key, oldHead);  
}

template<class Key>
int LinkedList<Key>::deleteHead()
{
  ListNode *newHead {head->getNext()};
  int key {head->getKey()};
  if (head != nullptr)
    delete head;
  head = newHead;
  return key;
}

template<class Key>
LinkedList<Key>::LinkedList(vector<int> keys): head(nullptr)
{
  for (auto key : keys) 
    insertHead(key);
}

template<class Key>
void LinkedList<Key>::print() const
{
  for (ListNode *node = head; node != nullptr;
       node = node->getNext()) {
    node->print();
    cout << " ";
  }
  cout << endl;
}

template<class Key>
LinkedList::~LinkedList()
{
  ListNode *node {head};
  while (node != nullptr) {
    ListNode *next = node->getNext();
    // cout << "delete node with " << node->getKey() << endl;
    delete node;
    node = next;
  }
}

