#include <iostream> 
using namespace std;

main()
{
  cout << "This is a table\n";
  for (int i = 1; i <= 9; i++) {
    cout << "Line number " << i << ":  ";
    for (int j = 1; j <= 9; j++)
      cout << i * j << ' ';
    cout << endl;
  }
}
