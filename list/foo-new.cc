#include <iostream>
using namespace std;

int *foo()
{
  int *iptr = new int;
  *iptr = 5;
  cout << "*iptr in foo() = " << *iptr << endl;
  return iptr;
}
int main()
{
  int *ptr {foo()};  // you can do this now.
  cout << "*ptr in main() = " << *ptr << endl;
  delete ptr;
  // cannot use *ptr from now on.
}
