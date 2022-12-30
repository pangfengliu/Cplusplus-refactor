#include "list-node-unique.h"

class LinkedList
{
  void printNode(const unique_ptr<ListNode> &node) const;
protected:
  unique_ptr<ListNode> head;
public:
  explicit LinkedList(vector <int> keys);
  void insertHead(int key);
  int deleteHead();
  void print() const;
};
