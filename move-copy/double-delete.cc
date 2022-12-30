#include <iostream>
using namespace std;

int main()
{
  int *aptr = new int;
  int *bptr {aptr};
  delete aptr;
  delete bptr; // error
  return 0;
}
