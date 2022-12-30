#include <iostream>
using namespace std;
#define ARRAYSIZE 5

main()
{
  int A[ARRAYSIZE], B[ARRAYSIZE];
  for (int i = 0; i < ARRAYSIZE; i++)
    cin >> A[i];
  for (int i = 0; i < ARRAYSIZE; i++)
    cin >> B[i];

  int C {0};
  for (int i = 0; i < ARRAYSIZE; i++)
    C += A[i] * B[i];
  cout << C << endl;
}
