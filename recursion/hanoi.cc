#include <iostream>
#include <cassert>
using namespace std;

void hanoi(const int n, const char src,
	   const char dst, const char buffer)
{
  cout << "hanoi(" << n << "," << src << ","
       << dst << "," << buffer << ")\n";
  if (n == 1)
    cout << "from " << src << " to " << dst <<endl;
  else {
    hanoi(n - 1, src, buffer, dst);
    cout << "from " << src << " to " << dst <<endl;
    hanoi(n - 1, buffer, dst, src);
  }
}
int main(void)
{
  int n;
  cin >> n;
  assert(n > 1);
  hanoi(n, 'A', 'C', 'B');
  return 0;
}
