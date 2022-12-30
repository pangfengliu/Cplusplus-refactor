#include <iostream>
#include <cassert>
using namespace std;
#define N 10

main()
{
  int array[N];
  for (int i = 0; i < N; i++)
    array[i] = i;
  int j;
  while (cin >> j) {
    assert(j >= 0 && j < N);
    cout << array[j] << endl;
  }
}
