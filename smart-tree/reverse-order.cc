#include "binary-search-tree.h"
using namespace pangfeng;

void reverseOrder(ConstNodePtr &ptr)
{
  if (ptr == nullptr)
    return;
  reverseOrder(ptr->getR());
  cout << ptr->getKey() << " ";
  reverseOrder(ptr->getL());
}
int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);
  BinarySearchTree bst(keys);
  bst.print("binary search tree");
  cout << "reverse order ";
  reverseOrder(bst.getRoot());
  cout << endl << endl;
  return 0;
}

