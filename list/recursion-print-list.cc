#include "linked-list.h"
using namespace pangfeng;

void head2tail(ListNode *ptr)
{
  if (ptr == nullptr)
    return;
  cout << ptr->getKey() << ' ';
  head2tail(ptr->getNext());
}
void tail2head(ListNode *ptr)
{
  if (ptr == nullptr)
    return;
  tail2head(ptr->getNext());
  cout << ptr->getKey() << ' ';
}
int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  LinkedList list(keys);
  cout << "head2tail: ";
  head2tail(list.getHead());
  cout << endl;
  cout << "tail2head: ";
  tail2head(list.getHead());
  cout << endl;
  return 0;
}

