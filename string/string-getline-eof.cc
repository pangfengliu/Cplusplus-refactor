#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s;

  getline(cin, s);
  while (!cin.eof()) {
    cout << '(' << s << ')' << endl;
    getline(cin, s);
  }
  return 0;
}
