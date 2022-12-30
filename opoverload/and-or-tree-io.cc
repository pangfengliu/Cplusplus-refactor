#include <iostream>
using namespace std;

#include "and-or-tree-io.h"

istream &operator>>(istream &in, anAndOrTreeIO &a)
{
  int n;
  cin >> n;
  vector <int> skeys;
  for (int i = 0; i < n; i++) {
    int key;
    cin >> key;
    skeys.push_back(key);
  }
  a = anAndOrTreeIO(keys);
}
