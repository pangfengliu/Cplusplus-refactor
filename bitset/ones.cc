#include <iostream>
#include <utility>
#include <bitset>
using namespace std;

int readNumberComputeOnes(bitset<4> number[], int ones[])
{
  int i {0};
  int k;
  while (cin >> k) {
    number[i] = k;
    ones[i] = number[i].count();
    i++;
  }
  return i;
}
void sortNumber(bitset<4> number[], int ones[], const int count)
{
  for (int i = count - 2; i >= 0; i--)
    for (int j = 0; j <= i; j++)
      if ((ones[j] > ones[j + 1]) || 
	  (ones[j] == ones[j + 1] && 
	   number[j].to_ulong() >
	   number[j + 1].to_ulong())) {
	swap(number[j], number[j + 1]);
	swap(ones[j],  ones[j + 1]);
      }
}
#define ARRAYSIZE 1000
int main()
{
  bitset<4> number[ARRAYSIZE];
  int ones[ARRAYSIZE];
  int count {readNumberComputeOnes(number, ones)};
  sortNumber(number, ones, count);

  for (int i = 0; i < count; i++)
    cout << number[i] << endl;
  return 0;
}
