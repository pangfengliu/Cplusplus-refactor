#include <iostream> 
using namespace std;

main()
{
  int i, j;
  for (i = 1; i <= 9; i++) {
    for (j = 1; j <= 9; j++)
      cout << i * j << ' ';
    cout << endl;
  }
}
