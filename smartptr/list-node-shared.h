#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class ListNode
{
private:
  int key;
  shared_ptr<ListNode> next;
public:
  ListNode(int k, shared_ptr<ListNode> &n):
    key(k), next(n) {};
  ~ListNode() {cout << "~ListNode " << key << endl;}
  int getKey() {return key;}
  shared_ptr<ListNode> &getNext() {return next;}
  void print() const {cout << key;}
};
