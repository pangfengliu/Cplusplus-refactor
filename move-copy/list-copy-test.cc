#include "linked-list-copy.h"
using namespace pangfeng;

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  LinkedList a(keys);
  cout << "a: " << endl;
  a.print();
  LinkedList b(vector<int>(3, 1));
  b = a;
  cout << "a: " << endl;
  a.print();
  cout << "b: " << endl;
  b.print();
  LinkedList c(b);
  cout << "b: " << endl;
  b.print();
  cout << "c: " << endl;
  c.print();
  b.deleteHead();
  b.deleteHead();
  c.deleteHead();
  cout << "a: " << endl;
  a.print();
  cout << "b: " << endl;
  b.print();
  cout << "c: " << endl;
  c.print();
  return 0;
}

