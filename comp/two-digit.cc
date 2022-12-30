#include <iostream>
using namespace std;

main()
{
  int i;
  cin >> i;
  int k {i / 10};
  cout << k << endl;
  k = i % 10;
  cout << k << endl;
}
