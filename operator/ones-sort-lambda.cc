#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "ones.h"

int main()
{
  vector<Number> numbers;
  int k;
  while (cin >> k)
    numbers.push_back(Number(k));
  sort(numbers.begin(), numbers.end(),
       [](const Number &a, const Number &b) {return(a < b);});
  cout << "without capturing anything" << endl;
  for (auto number : numbers)
    number.print();

  bool ascending {false};
  sort(numbers.begin(), numbers.end(),
       [=](const Number &a, const Number &b)
       {return((ascending)? (a < b) :(a > b));});
  cout << "with capturing ascending" << endl;
  for (auto number : numbers)
    number.print();

  return 0;
}
 
