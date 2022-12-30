#include <iostream>
#include <vector>
#include "binary-search-tree.h"
using namespace pangfeng;

int main()
{
  vector <int> keys;
  int key;
  while (cin >> key) 
    keys.push_back(key);

  BinarySearchTree bst(keys);
  bst.print("binary search tree");

  for (int key = 0; key < 10; key++)
    cout << key <<
      (bst.find(key)? " is " : " is not ")
	 << "in the binary search tree." << endl;

  return 0;
}

