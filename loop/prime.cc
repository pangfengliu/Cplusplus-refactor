#include <iostream>
using namespace std;

main()
{
  int n;
  cin >> n;
  bool prime {true};
  for (int i = 2; (i * i) <= n; i++)
    if ((n % i) == 0)
      prime = false;
  cout << prime << endl;
}
