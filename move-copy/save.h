#include <iostream>
#include <vector>
using namespace std;

namespace pangfeng {
  class ListNode
  {
  private:
    int key;
    ListNode *next;
  public:
  ListNode(int k, ListNode *n):
    key(k), next(n) {};
    int getKey() {return key;}
    ListNode *getNext() {return next;}
    void setNext(ListNode *n) {next = n;}
    void print() const {cout << key;}
  };
  
  class LinkedList
  {
  protected:
    ListNode *head;
  public:
    explicit LinkedList(ListNode *h = nullptr):
    head(h) {};
    explicit LinkedList(vector <int> keys);
#ifdef DEEPCOPY
    //--deep-copy--
    explicit LinkedList(const LinkedList& other):
      head(copy(other.head)) {};
    LinkedList& operator=(const LinkedList& other)
    {
      if (head != nullptr)
	this->~LinkedList();
      head = copy(other.head);
      return *this;
    }
    //--deep-copy-end--
#endif
#ifdef MOVE
    //--move-constructor--
    explicit LinkedList(LinkedList && other)
      : head(other.head) {
      other.head = nullptr;
    }
    //--move-constructor-end--
    //--operator--
    LinkedList& operator=(const LinkedList& other)
    = default;
    LinkedList& operator=(LinkedList && other) {
      head = other.head;
      other.head = nullptr;
      return *this;
    }
    //--operator-end--
#endif
    ~LinkedList();
    ListNode *getHead() {return head;};
    void insertHead(int key);
    int deleteHead();
    void print() const;
  };
}

using namespace pangfeng;
