#include <iostream>
#include <utility>		// for swap
#include "ones.h"

using namespace std;

//--readNumberComputeOnes--
void readNumberComputeOnes(NumberSet &numberSet)
{
  numberSet.count = 0;
  Number *numberPtr {numberSet.numbers};
  int k;
  while (cin >> k) {
    numberPtr->bits = k;
    numberPtr->ones = (numberPtr->bits).count();
    numberSet.count++;
    numberPtr++;
  }
}
//--needSwap--
bool needSwap(const Number &curr, const Number &next)
{
  return (curr.ones > next.ones || (curr.ones == next.ones &&
	   curr.bits.to_ulong() > next.bits.to_ulong()));
}
//--sortNumberSet--
void sortNumberSet(NumberSet &numberSet)
{
  for (int i = numberSet.count - 2; i >= 0; i--)
    for (int j = 0; j <= i; j++) 
      if (needSwap(numberSet.numbers[j],numberSet.numbers[j + 1]))
	swap(numberSet.numbers[j], numberSet.numbers[j + 1]);
}
//--printNumberSet--
void printNumberSet(const NumberSet &numberSet)
{
  for (int i = 0; i < numberSet.count; i++)
    cout << numberSet.numbers[i].bits << endl;
}

//--main--
int main()
{
  NumberSet numberset;
  readNumberComputeOnes(numberset);
  sortNumberSet(numberset);
  printNumberSet(numberset);
  return 0;
}
//--mainend--
