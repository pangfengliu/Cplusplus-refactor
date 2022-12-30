#include <iostream> 
using namespace std;
int main(void)
{
  int i, j;
  int &ref1 {i};
  int &ref2 {ref1};

  cin >> i;
  cout << "i = " << i << endl;
  cout << "&i = " << &i << endl;
  cout << "&j = " << &j << endl;
  cout << "ref1 = " << ref1 << endl;
  cout << "&ref1 = " << &ref1 << endl;
  cout << "ref2 = " << ref2 << endl;
  cout << "&ref2 = " << &ref2 << endl;

  ref1 = 8;
  cout << "i = " << i << endl;
  j = ref2 + 3;
  cout << "j = " << j << endl;
  return 0;
}
