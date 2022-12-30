#include "linked-list.h"
using namespace pangfeng;

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  LinkedList a(keys);
  cout << "a: ";
  a.print();
  LinkedList b(a);
  cout << "b: ";
  b.print();
  cout << "a: ";
  a.print();
  cout << "b: ";
  b.print();
  return 0;
}

