#include <iostream>
#include <vector>
#include "memory.h"

using namespace std;

int main()
{
  int memorySize;
  cin >> memorySize;
  Memory memory(memorySize);
  memory.print();

  vector <int> start;
  vector <int> length;
  int s, l;
  while (cin >> s >> l) {
    start.push_back(s);
    length.push_back(l);
  }

  int n = start.size();
  for (int i = 0; i < n; i++) {
    cout << "allocating " << start[i] << " " << length[i] << endl;
    memory.allocate(start[i], length[i]);
    cout << "memory:" << endl;
    memory.print();
  }

  for (int i = n - 1; i >= 0; i--) {
    cout << "freeing " << start[i] << " " << length[i] << endl;
    memory.free(start[i], length[i]);
    cout << "memory:" << endl;
    memory.print();
  }
  return 0;
}
