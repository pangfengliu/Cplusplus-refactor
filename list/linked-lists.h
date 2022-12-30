#include "linked-list.h"
using namespace pangfeng;

class LinkedLists
{
  vector <LinkedList*> lists;
  int findNext(int index, int adj,
	       vector <ListNode*> &currentNode);
 public:
 explicit LinkedLists(vector <LinkedList*> l): lists(l) {};
  ListNode *merge();
};
