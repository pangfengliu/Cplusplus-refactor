#include <algorithm>
#include <exception>
#include "pre-in-tree.h"
#include "read-vector.h"

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
NodePtr PreInTree::buildTree
(vector <int> pre, vector <int> in)
{
  if (pre.size() == 0)
    return nullptr;
  int root = pre[0];
  auto rootLocation
     {find(in.begin(), in.end(), root)};
  if (rootLocation == in.end())
    throw rootNotFound;
  int leftSize = rootLocation - in.begin();
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
//--end--
