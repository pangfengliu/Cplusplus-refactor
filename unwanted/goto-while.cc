#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int i {0};
 start:  if (i >= 3) 
    goto next;
  cout << "i = " << i << endl;
  i++;
  goto start;
 next: return 0;
}
