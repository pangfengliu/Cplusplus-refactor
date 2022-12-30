#include <iostream>
#include <iomanip>
using namespace std;

main()
{
  int array[][3] {{1, 2, 3}, {4, 5, 6}};
  for (int i = 0; i < 2; i++) 
    for (int j = 0; j < 3; j++)
      cout << setw(3) << array[i][j] << ' ';
}
