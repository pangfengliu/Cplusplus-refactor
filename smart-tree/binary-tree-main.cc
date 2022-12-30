#include "binary-tree.h"
using namespace pangfeng;

int main()
{
  BinaryTree
    tree(new TreeNode(6, new TreeNode(4, new TreeNode(3),
				      nullptr),
		      new TreeNode(1)));
  tree.print("binary tree");
  int key;
  while (cin >> key) 
    cout << key << (tree.find(key)? " is " : " is not ")
  	 << "in the binary tree." << endl;
  return 0;
}
