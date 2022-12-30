#include "list-node-template.h"

template<class Key>
class LinkedList
{
 protected:
  shared_ptr<ListNode<Key>> head;
 public:
  LinkedList<Key>(shared_ptr<ListNode<Key>> h = nullptr):
    head(h) {};
#ifdef VERBOSE
  ~LinkedList<Key>() {cout << "~LinkedList" << endl;};
#endif
  shared_ptr<ListNode<Key>> getHead() {return head;};
  void insertHead(Key key);
  Key deleteHead();
};
template<class Key>
void LinkedList<Key>::insertHead(Key key)
{
  shared_ptr<ListNode<Key>> node
    {make_shared<ListNode<Key>>(key, head)};  
  head = node;
}
template<class Key>
Key LinkedList<Key>::deleteHead()
{
  shared_ptr<ListNode<Key>> newHead {head->getNext()};
  Key key {head->getKey()};
  head = newHead;
  return key;
}
