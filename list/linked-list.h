#include "list-node.h"

namespace pangfeng {
  class LinkedList
  {
  protected:
    ListNode *head;
  public:
    explicit LinkedList(ListNode *h = nullptr):
    head(h) {};
    explicit LinkedList(vector <int> keys);
    ~LinkedList();
    ListNode *getHead() {return head;};
    void insertHead(int key);
    int deleteHead();
    void print() const;
  };
}

