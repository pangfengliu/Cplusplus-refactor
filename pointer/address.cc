#include <iostream> 
using namespace std;

int main(void)
{
  double i;
  double *iptr {&i};
  cin >> i;
  cout << "iptr = " << iptr << endl;
  cout << "&iptr = " << &iptr << endl;
  cout << "*iptr = " << *iptr << endl;
  cout << "*(&iptr) = " << *(&iptr) << endl;
  cout << "&(*iptr) = " << &(*iptr) << endl;
  cout << "*(*(&iptr)) = " << *(*(&iptr)) << endl;
  cout << "*(&(*iptr)) = " << *(&(*iptr)) << endl;
  cout << "&(*(&iptr)) = " << &(*(&iptr)) << endl;

  cout << "i = " << i << endl;
  cout << "&i = " << &i << endl;
  cout << "*(&i) = " << *(&i) << endl;

  // do not do this
  // cout << "*i = %p" << *i << endl; 

  // do not do this either
  // cout << "&(*i) = %p" << &(*i); 

  return 0;
}
