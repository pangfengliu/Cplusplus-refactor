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
    // move-constructor
    LinkedList(LinkedList && other)
    {
      head = other.head;
      other.head = nullptr;
    }
    // move assignment
    LinkedList&
    operator=(LinkedList && other) {
      head = other.head;
      other.head = nullptr;
      return *this;
    }
    ~LinkedList();

    ListNode *getHead() {return head;};
    void insertHead(int key);
    int deleteHead();
    void print() const;
  };
}

