#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class ListNode
{
private:
  int key;
  unique_ptr<ListNode> next;
public:
  ListNode(int k, unique_ptr<ListNode> &n):
    key(k), next(move(n)) {};
  ~ListNode() {cout << "~ListNode " << key << endl;}
  int getKey() const {return key;}
  unique_ptr<ListNode> &getNext() {return next;}
  void print() const {cout << key;}
};
