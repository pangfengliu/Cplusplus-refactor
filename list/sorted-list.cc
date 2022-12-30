#include "sorted-list.h"
using namespace pangfeng;

SortedList::SortedList
(vector <int> keys)
{
  head = nullptr;
  for (auto key : keys) 
    insert(key);
}
//--insert--
void SortedList::insert(int key)
{
  auto toInsert {new ListNode(key, nullptr)};
  auto node {head};
  ListNode *previous {nullptr};
  while (node != nullptr && node->getKey() < key) {
    previous = node;
    node = node->getNext();
  }
  if (previous == nullptr) {
    toInsert->setNext(head);
    head = toInsert;
  } else {
    toInsert->setNext(previous->getNext());
    previous->setNext(toInsert);
  }
}
//--end--

