#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  char s[80];
  while (cin.getline(s, 80))
    cout << '(' << s << ')' << endl;
  return 0;
}
