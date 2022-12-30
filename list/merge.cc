#include "linked-lists.h"
using namespace std;

int main()
{
  vector <LinkedList *> inputLists;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    vector <int> keys;
    for (int j = 0; j < m; j++) {
      int key;
      cin >> key;
      keys.push_back(key);
    }
    LinkedList *inputList = new LinkedList(keys);
    inputList->print();
    inputLists.push_back(inputList);
  }
  LinkedLists lists(inputLists);
  LinkedList mergedList(lists.merge());
  mergedList.print();
}
