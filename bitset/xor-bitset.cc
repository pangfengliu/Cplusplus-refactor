#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
  bitset<8> permit1;
  bitset<8> permit2;
  permit1[1] = permit1[4] = 1;
  permit2[4] = permit2[5] = 1;
  cout << "permit1 = " << permit1 << endl;
  cout << "permit2 = " << permit2 << endl;

  auto one {permit1 ^ permit2};
  cout << "permit1 ^ permit2 = " << one << endl;

  for (int i = 0; i < 8; i++)
    if (one[i] == 1)
      cout << "exactly one has permit in semester "
	   << i << endl;
  return 0;
}
