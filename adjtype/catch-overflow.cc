#include <iostream>
using namespace std;

int main()
{
  int i;
  cout << "sizeof(i) = " << sizeof(i) << endl;;
  try {
    cin >> i;
    cout << i << endl;
    i++;
    cout << i << endl;
  }
  catch (exception &e) {
    cout << e.what() << endl;
  }
  
  return 0;
}
