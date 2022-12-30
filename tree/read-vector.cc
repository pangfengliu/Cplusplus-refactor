#include "read-vector.h"

void readVector(int n, vector <int> &v)
{
  for (int i = 0; i < n; i++) {
    int key;
    cin >> key;
    v.push_back(key);
  }
}
