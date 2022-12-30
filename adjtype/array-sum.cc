#include <iostream>
using namespace std;

int sum(const int a[], const int n)
{
  int total {0};
  for (int i = 0; i < n; i++)
    total += a[i];
  return total;
}
#define ARRAYSIZE 5
int main(void)
{
  int array[ARRAYSIZE];
  for (int &number: array)
    cin >> number;
  cout << "sum = " << sum(array, ARRAYSIZE) << endl;
  return 0;
}
