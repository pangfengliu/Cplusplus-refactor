#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
  bitset<8> permit {5};
  auto complement {~permit};
  cout << "permit = " << permit << endl;
  cout << "complement = " << complement << endl;
  return 0;
}
