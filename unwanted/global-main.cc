#include <iostream>
using namespace std;

int i; // a global variable
void foo();

int main(int argc, char *argv[])
{
  i = 1;
  cout << "main: i = " << i << endl;
  foo();
  cout << "main: i = " << i << endl;
  return 0;
}
