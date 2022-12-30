#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s;
  while (getline(cin, s))
    cout << '(' << s << ')' << endl;
  return 0;
}
