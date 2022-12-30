#include <iostream> 
#include <iomanip>
using namespace std;

main()
{
  int i, j, k;
  cout << "This is a table\n";
  cout << setfill('0');
  for (i = 1; i <= 9; i++) {
    cout << "Line number " << i << ":  ";
    for (j = 1; j <= 9; j++)
      cout << setw(2) << i * j << ' ';
    cout << endl;
  }
}
