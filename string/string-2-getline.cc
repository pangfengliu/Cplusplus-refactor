#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s1, s2;
  getline(getline(cin, s1), s2); 
  cout << '(' << s1 << ')' << endl;
  cout << '(' << s2 << ')' << endl;
  return 0;
}
