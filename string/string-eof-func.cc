#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s;
  cin >> s;
  while (!cin.eof()) {
    cout << '(' << s << ')';
    cin >> s;
  }

  return 0;
}
