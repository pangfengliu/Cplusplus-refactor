#include "sorted-list-remove.h"
using namespace pangfeng;

void SortedListRemove::remove(int key)
{
  head = removeKeyFromList(key, head);
}
//--insertList--
ListNode *SortedListRemove::
removeKeyFromList(int key, ListNode *list)
{
  if (!list) return list;
  if (list->getKey() == key) {
    ListNode *next = list->getNext();
    delete list;
    return next;
  }
  list->setNext(removeKeyFromList(key, list->getNext()));
  return(list);
}
//--end--

