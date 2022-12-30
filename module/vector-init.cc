#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> array1 (5, 1);
  for (auto number : array1)
    cout << number << ' ';
  cout << endl;
  vector<vector<int>>
    array2 (2, vector<int> (3, 0));
  for (auto row : array2) {
    for (auto number : row)
      cout << number << " ";
    cout << endl;
  }
  return 0;
}

