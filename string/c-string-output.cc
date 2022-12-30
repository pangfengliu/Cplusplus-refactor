#include <iostream>
using namespace std;

int main(void)
{
  char s[80] {'m', 'a', 'i', 'n', '(', ')', '\n', 
      '{', '\n', '}', '\n', '\0'} ;
  cout << s;
  return 0;
}
