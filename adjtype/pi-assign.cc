#include <iostream>
using namespace std;
int main(void)
{
  const double pi {3.1415926};
  double radius {2.0};
  pi = 3.0;
  cout << "area = " <<
    pi * radius * radius << endl;
  return 0;
}
