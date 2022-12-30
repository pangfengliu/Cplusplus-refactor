#include <iostream>
#include <iomanip>
using namespace std;

#define ROW 3
#define COL 4

main()
{
  int array1[ROW][COL] {{1, 2}, {4}};
  int array2[ROW][COL] {{0}};

  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++)
      cout << setw(3) << array1[i][j];
    cout << endl;
  }
  cout << endl;
  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++)
      cout << setw(3) << array2[i][j];
    cout << endl;
  }
}
