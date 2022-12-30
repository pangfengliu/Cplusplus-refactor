#include "list-node-shared.h"

class LinkedList
{
  void printNode(const shared_ptr<ListNode> &node) const;
protected:
  shared_ptr<ListNode> head;
public:
  explicit LinkedList(vector <int> keys);
  void insertHead(int key);
  int deleteHead();
  void print() const;
};
