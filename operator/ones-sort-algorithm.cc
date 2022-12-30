#include <iostream>
#include <vector>
#include <algorithm>
#include "ones.h"
using namespace std;

int main()
{
  vector<Number> numbers;
  int k;
  while (cin >> k)
    numbers.push_back(Number(k));
  sort(numbers.begin(), numbers.end());
  for (auto number : numbers)
    number.print();
  return 0;
}

