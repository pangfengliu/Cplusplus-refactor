#include "rebuild-tree.h"

int main()
{
  while (!cin.eof()) {
    try {
      vector <int> pre, in;
      readPreIn(pre, in);
      if (!cin.eof()) {
	BinaryTree btree(buildBinaryTree(pre, in));
	btree.print("rebuild binary tree");
      }
    } catch (exception &e) {
      cout << "exception caught, e.what() = "
	   << e.what() << endl;
    }
  }
  return 0;
}
