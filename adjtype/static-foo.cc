#include <iostream>
using namespace std;

void foo(void)
{
  static int i {0}; 
  i++;
  cout << "bar: i = " << i << endl;
}

int main()
{
  for (int j = 0; j < 5; j++)
    foo();
  return 0;
}
