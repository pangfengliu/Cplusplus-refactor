#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> array1;
  cout << "array1" << endl;
  for (auto number : array1)
    cout << number << " ";
  cout << endl;

  cout << "array2" << endl;
  vector<int> array2 {23, 48, 31, 70};
  for (auto number : array2)
    cout << number << " ";
  cout << endl;

  cout << "array2 again" << endl;
  for (auto v : array2)
    cout << v << " ";
  cout << endl;
  cout << "array2 again and again" << endl;
  for (auto i = array2.begin(); i < array2.end(); i++)
    cout << *i << " ";
  cout << endl;

  cout << "array3" << endl;
  vector<vector<int>> array3 {{1, 2}, {3, 4, 5}};
  for (auto row : array3) {
    for (auto number : row)
      cout << number << ' ';
    cout << endl;
  }
  return 0;
}

