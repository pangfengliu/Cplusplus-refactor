#include "sorted-list.h"
using namespace pangfeng;

SortedList::SortedList
(vector <int> keys)
{
  head = nullptr;
  for (auto key : keys) 
    insert(key);
}
//--insertList--
ListNode *insertList
(ListNode *toInsert, ListNode *list)
{
  if (list == nullptr || toInsert->getKey() < list->getKey()) {
    toInsert->setNext(list);
    return toInsert;
  }
  list->setNext(insertList(toInsert, list->getNext()));
  return(list);
}
//--insert--
void SortedList::insert(int key)
{
  ListNode *toInsert = new ListNode(key, nullptr);
  head = insertList(toInsert, head);
}
//--end--

