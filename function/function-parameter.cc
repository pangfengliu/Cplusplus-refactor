#include <iostream>
using namespace std;

void test(int j)
{
  cout << "the address of j = " << &j << endl;
  cout << "before adding 1 j = " << j << endl;
  j++;
  cout << "after adding 1 j = " << j << endl;
  return;
}

int main(void)
{
  int i;
  cin >> i;
  cout << "the address of i = %p\n" << &i << endl;
  cout << "before calling test i = " << i << endl;
  test(i);
  cout << "after calling test i = " << i << endl;
  test(3 + 7);
  return 0;
}
