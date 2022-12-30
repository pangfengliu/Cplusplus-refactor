#include<iostream>
using namespace std;

#include "function.h"
#include "atom.h"
#include "exp.h"

int main()
{
  // Variable x;
  // Constant c(2.0);
  // Function &g = Variable() + Constant(2.0);
  Variable x;
  Constant c1(2.0);
  Constant c2(0.5);
  Constant c3(3.0);
  Function &g = sin(x + c1);

  Function & f =
    exp(sin((x * x * x + c2) / (x - c3)));

  Function & dg = g.derivative();
  
  // cout << x << c << endl;
  // cout << g << endl;
  cout << g << endl;
  cout << dg << endl;
  cout << f << endl;
  cout << "g(1.0) = " << g(1.0) << endl;
  delete &g;
  delete &dg;
  delete &f;
}
