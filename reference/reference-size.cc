#include <iostream> 
using namespace std;
int main(void)
{
  int i, &iref {i};
  float f, &fref {f};
  double d, &dref {d};
  cout << "sizeof(iref) = " << sizeof(iref) << endl;
  cout << "sizeof(fref) = " << sizeof(fref) << endl;
  cout << "sizeof(dref) = " << sizeof(dref) << endl;
  return 0;
}
