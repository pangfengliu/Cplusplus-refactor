#include <iostream>
#include <cassert>
using namespace std;

void printNum(int start, int end)
{
  for (int i = start; i <= end; i++)
    cout << i << endl;
  return;
}

int main(void)
{
  int a, b;
  cin >> a >> b;
  assert(a <= b);

  printNum(a, b);
  return 0;
}
