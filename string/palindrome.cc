#include <iostream>
#include "stack-constructor.h"
using namespace std;

int main(void)
{
  char string[128];
  Stack stack;
  int i;
  int half;
  int length;

  cin >> length;
  for (i = 0; i < length; i++)
    cin >> string[i];

  half = length / 2;
  for (i = 0; i < half; i++) 
    stack.push(string[i]);
  for (i = length - half; i < length; i++)
    if (string[i] != stack.pop()) {
      cout << "not a palindrome\n";
      return 0;
    }
  cout << "palindrome\n";
  return 0;
}
