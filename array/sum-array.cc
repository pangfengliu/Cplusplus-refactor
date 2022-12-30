#include <iostream>
using namespace std;
#define ARRAYSIZE 10

main()
{
  int a[ARRAYSIZE];
  for (int i = 0; i < ARRAYSIZE; i++)
    cin >> a[i];
  int sum {0};
  for (int i = 0; i < ARRAYSIZE; i++)
    sum += a[i];
  cout << sum << endl;
}
