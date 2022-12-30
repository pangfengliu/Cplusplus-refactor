#include <iostream>
using namespace std;

main()
{
  int i {3};
  int j {0};
  bool k {i && j};
  cout << k << endl;
  k = (i || j);
  cout << k << endl;
  k = !i;
  cout << k << endl;
}
