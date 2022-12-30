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
};
