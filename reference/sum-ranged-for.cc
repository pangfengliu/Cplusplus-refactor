#include <iostream>
using namespace std;
#define N 6

int main()
{
  int keys[N];
  int sum {0};
  for (int &v : keys)
    cin >> v;
  for (int &v : keys)
    sum += v;
  cout << sum << endl;
  return 0;
}
