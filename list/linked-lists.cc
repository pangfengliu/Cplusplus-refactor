#include "linked-lists.h"

using namespace std;
//--findNext--
int LinkedLists::findNext(int index, int adj,
			  vector <ListNode*> &currentNode)
{
  auto size {lists.size()};
  while (index >= 0 && index < size) {
    if (currentNode[index] != nullptr)
      return index;
    index += adj;
  }
  return -1;
}
//--merge--
ListNode *LinkedLists::merge()
{
  vector <ListNode*> currentNode;
  for (auto list : lists) 
    currentNode.push_back(list->getHead());

  int last {0};
  ListNode *lastPtr {nullptr}, *head {nullptr};
  int adj {1};            /* foreward */
  int current;

  while ((current = findNext(last, adj, currentNode)) != -1) {
    if (lastPtr == nullptr) 
      head = currentNode[current];
    else
      lastPtr->setNext(currentNode[current]);
    int next;
    while ((next = findNext(current + adj, adj, currentNode))
	   != -1) {
      ListNode *currentPtr = currentNode[current];
      currentNode[current] = currentPtr->getNext();
      currentPtr->setNext(currentNode[next]);
      current = next;
    }
    last = current;
    lastPtr = currentNode[current];
    currentNode[current] = lastPtr->getNext();
    adj = -adj;
  }
  return head;
}
//--end--
