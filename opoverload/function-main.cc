#include<iostream>
using namespace std;
#include "atom.h"

int main()
{
  Variable x;
  Constant c1(3.0);
  Constant c2(0.5);
  Function &f = exp(sin(x * x + c1) / (x - c2));
  cout << "f(x) = " << f << endl;
  cout << "f(2.0) = " << f(2.0) << endl;

  Function & df = (*(f.derivative()));
  cout << "f'(x) = " << df << endl;
  cout << "f'(2.0) = " << df(2.0) << endl;
 
  cout << endl;
  delete &f;
  cout << "delete f completes." << endl;
  cout << endl;
  delete &df;
  cout << "delete df completes." << endl;
  cout << endl;
  return 0;
}
