#include <iostream>
#include <cassert>
using namespace std;

main()
{
  int start, end;
  cin >> start >> end;
  assert(start <= end);
  for (int i = start; i <= end; i++)
    cout << i << " ";
  cout << endl;
}
