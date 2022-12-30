#include <iostream>
using namespace std;
#define ARRAYSIZE 10

main()
{
  int a[ARRAYSIZE] {3, 6, 1, 8, 4, 9, 10, 4, 7, 6};
  int sum {0};
  for (int e : a)
    sum += e;
  cout << sum << endl;
}
