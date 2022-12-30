#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> array {1, 2, 3, 0};
  try {
    for (int i = 0; i < 100; i++)
      cout << array[i] << " ";
    cout << endl;
  }
  catch (exception& e) {
    cout << e.what() << endl;
  }
}

