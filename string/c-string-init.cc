#include <iostream>
using namespace std;

int main(void)
{
  char s[80] {'m', 'a', 'i', 'n', '(', ')', '\n', 
      '{', '\n', '}', '\n'} ;
  for (int i = 0; i < 11; i++)
    cout << s[i];
  return 0;
}
