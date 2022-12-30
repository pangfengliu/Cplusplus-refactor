#include <iostream>
using namespace std;

#define X 2
#define Y 3
#define Z 4

main()
{
  int a[X][Y][Z];
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < Y; j++) {
      for (int k = 0; k < Z; k++) 
	cout << &(a[i][j][k]) << " ";
      cout << endl;
    }
    cout << endl;
  }
}
