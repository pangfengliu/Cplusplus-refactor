#include <iostream>
#include <vector>
#include "linked-list.h"

namespace pangfeng {
  //--insertHead--
  void LinkedList::insertHead(int key)
  {
    auto oldHead {head};
    head = new ListNode(key, oldHead);  
  }
  //--deleteHead--
  int LinkedList::deleteHead()
  {
    auto newHead {head->getNext()};
    auto key {head->getKey()};
    if (head != nullptr)
      delete head;
    head = newHead;
    return key;
  }
  //--LinkedList::LinkedList--
  LinkedList::LinkedList(vector<int> keys):
    head(nullptr)
  {
    for (auto key : keys) 
      insertHead(key);
  }
  //--LinkedList::print--
  void LinkedList::print() const
  {
    for (auto node = head; node != nullptr;
	 node = node->getNext()) {
      node->print();
      cout << " ";
    }
    cout << endl;
  }
  //--desctructor--
  LinkedList::~LinkedList()
  {
    auto node {head};
    while (node != nullptr) {
      auto next = node->getNext();
      cout << "delete node with "
	   << node->getKey() << endl;
      delete node;
      node = next;
    }
  }
  //--end--
}
