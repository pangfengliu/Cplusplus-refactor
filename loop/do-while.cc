#include <iostream>
using namespace std;

main()
{
  int i;
  cin >> i;
  do
    i++; // at lease once
  while (i < 0);
  cout << i << endl;
}
