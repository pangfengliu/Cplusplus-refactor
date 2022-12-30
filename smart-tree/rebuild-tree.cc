#include "rebuild-tree.h"
using namespace std;

//--readPreIn--
void readPreIn(vector <int> &pre, vector <int> &in)
{
  int n;
  cin >> n;
  if (cin.eof())
    return;
  readVector(n, pre);
  readVector(n, in);
}
//--RootNotFound--
class RootNotFound: public exception
{
  virtual const char* what() const noexcept
  {return "Root not found";}
};
RootNotFound rootNotFound;
//--buildTree--
NodePtr buildBinaryTree
(vector <int> pre, vector <int> in)
{
  int root {pre[0]};
  auto rootLocation {find(in.begin(), in.end(), root)};
  if (rootLocation == in.end())
    throw rootNotFound;
  int lSize = rootLocation - in.begin();
  int rSize = pre.size() - lSize - 1;
  NodePtr node {new TreeNode(root)};
  if (lSize > 0)
    node->getL() =
      move(buildBinaryTree
	   (vector <int> (pre.begin() + 1, pre.begin() +1 +lSize),
	    vector <int> (in.begin(), in.begin() + lSize)));
  if (rSize > 0)
    node->getR() =
      move(buildBinaryTree
	   (vector <int>(pre.begin()+ lSize + 1, pre.end()),
	    vector <int>(in.begin() + lSize + 1, in.end())));
  return node;
}
//--end--

