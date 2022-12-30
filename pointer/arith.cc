#include <iostream> 
using namespace std;

int main(void)
{
  int array[10];
  int *iptr1 {&(array[3])};
  int *iptr2 {iptr1 + 4};

  cout << "iptr1 = " << iptr1 << endl;
  cout << "iptr2 = " << iptr2 << endl;
  cout << "iptr2 - iptr1 = " << iptr2 - iptr1 
       << endl;
  return 0;
}
