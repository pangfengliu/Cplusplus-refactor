#include <iostream>
using namespace std;

int main(void)
{
  int i {1};
  const int j {2};
  int &refToInt1 {i};
  int &refToInt2 {j};		// not OK
  const int &refToInt3 {i};
  const int &refToInt4 {j};
  i++;
  j++;				// not OK
  refToInt1++;
  refToInt2++;
  refToInt3++;			// not OK
  refToInt4++;			// not OK
  return 0;
}
