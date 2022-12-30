#include <iostream>
#include <vector>
#include <memory>
using namespace std;

template<class Key>
class ListNode
{
 private:
  Key key;
  shared_ptr<ListNode<Key>> next;
 public:
  ListNode<Key>(Key k, shared_ptr<ListNode<Key>> n):
    key(k), next(n) {};
#ifdef VERBOSE
  ~ListNode<Key>() {cout << "~ListNode<Key>" << endl;};
#endif
  Key getKey() {return key;}
  shared_ptr<ListNode<Key>> getNext() {return next;}
};
