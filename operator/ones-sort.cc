#include <iostream>
#include <vector>
#include <utility>
#include "ones.h"
using namespace std;

int main()
{
  vector<Number> numbers;
  int k;
  while (cin >> k)
    numbers.push_back(Number(k));
  for (int i = numbers.size() - 2; i >= 0; i--)
    for (int j = 0; j <= i; j++) 
      if (numbers[j + 1] < numbers[j])
	swap(numbers[j], numbers[j + 1]);
  for (auto number : numbers)
    number.print();
  return 0;
}

