#include "sorted-list-remove.h"
using namespace pangfeng;

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  SortedListRemove list(keys);
  for (auto key : keys) {
    cout << "before removing " << key << endl;
    list.print();
    list.remove(key);
    cout << "after removing " << key << endl;
    list.print();
    cout << endl;
  }
  return 0;
}

