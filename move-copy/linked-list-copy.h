#include "list-node.h"

namespace pangfeng {
  class LinkedList
  {
    //--copy--
    ListNode *copy(ListNode *node) {
      if (node == nullptr)
	return nullptr;
      return new ListNode(node->getKey(), copy(node->getNext()));
    };
    //--end--
  protected:
    ListNode *head;
  public:
    explicit LinkedList(ListNode *h = nullptr):
    head(h) {};
    explicit LinkedList(vector <int> keys);
    ~LinkedList();
    //--deep-copy--
    explicit LinkedList(const LinkedList& other)
    {head = copy(other.head);};
    LinkedList& operator=(const LinkedList& other)
    {
      if (head != nullptr)
	this->~LinkedList();
      head = copy(other.head);
      return *this;
    }
    ListNode *getHead() {return head;};
    void insertHead(int key);
    int deleteHead();
    void print() const;
  };
}
