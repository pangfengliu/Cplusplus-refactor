#include <iostream> 
using namespace std;

int main(void)
{
  double i;
  cin >> i;

  double *iptr1 {&i};
  double *iptr2 {iptr1};
  
  cout << "i = " << i << endl;
  cout << "&i = " << &i << endl;
  cout << "iptr1 = " << iptr1 << endl;
  cout << "&iptr1 = " << &iptr1 << endl;
  cout << "iptr2 = " << iptr2 << endl;
  cout << "&iptr2 = " << &iptr2 << endl;

  *iptr1 = 8;
  cout << "i = " << i << endl;

  double k {*iptr2 + 3};
  cout << "&k = " << &k << endl;
  cout << "k = " << k << endl;
  return 0;
}
