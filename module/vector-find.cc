#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  cout << "array" << endl;
  vector<int> array {23, 48, 31, 70};
  for (auto number : array)
    cout << number << " ";
  cout << endl;
  int key;
  while (cin >> key) {
    vector<int>::iterator it =
      std::find(array.begin(), array.end(), key);
    if (it == array.end())
      cout << key << " not found" << endl;
    else
      cout << key << " found at array["
	   << it - array.begin() << "]" << endl;
  }
  return 0;
}

