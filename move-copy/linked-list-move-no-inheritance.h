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
    //--ListNode--
    ListNode(int k, ListNode *n):
    key(k), next(n) {};
    //--ListNodeEnd--
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

using namespace pangfeng;
