#include "linked-list.h"
using namespace pangfeng;

int sumRecursion(ListNode *node)
{
  if (node == nullptr)
    return 0;
  return
    node->getKey() + sumRecursion(node->getNext());
}
int sumIterative(ListNode *node)
{
  int sum {0};
  for (auto ptr = node; ptr != nullptr; ptr = ptr->getNext())
    sum += ptr->getKey();
  return sum;
}
int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  LinkedList list(keys);
  cout << "sumRecursion:" << sumRecursion(list.getHead()) << endl;
  cout << "sumIterative:" << sumIterative(list.getHead()) << endl;
  return 0;
}

