#include <iostream>
using namespace std;

#define ROWA 2
#define COLA 3
#define ROWB COLA
#define COLB 4
#define ROWC ROWA
#define COLC COLB

main()
{
  int A[ROWA][COLA], B[ROWB][COLB], C[ROWC][COLC];
  for (int i = 0; i < ROWA; i++)
    for (int j = 0; j < COLA; j++)
      cin >> A[i][j];
  for (int i = 0; i < ROWB; i++)
    for (int j = 0; j < COLB; j++)
      cin >> B[i][j];
  for (int i = 0; i < ROWC; i++)
    for (int j = 0; j < COLC; j++)
      C[i][j] = 0;

  for (int i = 0; i < ROWC; i++)
    for (int j = 0; j < COLC; j++)
      for (int k = 0; k < COLA; k++) 	// or k < ROWB 
	C[i][j] += A[i][k] * B[k][j];
  for (int i = 0; i < ROWC; i++)
    for (int j = 0; j < COLC; j++)
      cout << C[i][j] << endl;
}
