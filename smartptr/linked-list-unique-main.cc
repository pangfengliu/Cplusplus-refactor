#include "linked-list-unique.h"

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  LinkedList list(keys);
  list.print();
  int i {list.deleteHead()};
  cout << "delete " << i << endl;
  list.print();
  return 0;
}

