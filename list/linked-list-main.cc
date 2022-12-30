#include "linked-list.h"
using namespace pangfeng;

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  LinkedList list(keys);
  cout << "list before deleteHead" << endl;
  list.print();
  list.deleteHead();
  cout << "list after deleteHead" << endl;
  list.print();
  return 0;
}

