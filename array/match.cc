#include <iostream>
using namespace std;
#define ARRAYSIZE 6

main()
{
  int keys[ARRAYSIZE] {3, 4, 6, 2, 8, 10};
  int key;
  while (cin >> key) {
    bool found {false};
    for (int i = 0; i < ARRAYSIZE && !found; i++)
      if (key == keys[i]) {
	cout << i << endl;
	found = true;
      }
    if (!found)
      cout << "-1" << endl;
  }
}
