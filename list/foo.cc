#include <iostream>
using namespace std;

int *foo()
{
  int i {0};
  cout << "i in foo() = " << i << endl;
  return &i;
}
int main()
{
  int *ptr {foo()};  // you cannot do this.
  cout << "*ptr from foo() = " << *ptr << endl;
}
