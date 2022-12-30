#include "pre-in-tree.h"
#include "read-vector.h"
#include <algorithm>

void readPreIn(vector <int> &pre, vector <int> &in)
{
  int n;
  cin >> n;
  readVector(n, pre);
  readVector(n, in);
}

TreeNode *PreInTree::buildTree
(vector <int> pre, vector <int> in)
{
  if (pre.size() == 0)
    return nullptr;
  int root = pre[0];
  int leftSize =
    find(in.begin(), in.end(), root) - in.begin();
  return
    (new TreeNode(root,
		  buildTree
		  (vector <int>
		   (pre.begin() + 1,
		    pre.begin() + 1 + leftSize),
		   vector <int>
		   (in.begin(),
		    in.begin() + leftSize)),
		  buildTree
		  (vector <int>
		   (pre.begin() + leftSize + 1,
		    pre.end()),
		   vector <int>
		   (in.begin() + leftSize + 1,
		    in.end()))));
}
