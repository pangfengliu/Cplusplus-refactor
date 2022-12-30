#include "sorted-list.h"
using namespace pangfeng;

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  SortedList list(keys);
  list.print();
  return 0;
}

