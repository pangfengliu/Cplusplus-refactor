#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  cout << "before assignment s2 = " << s2 << endl;
  s2 = s1;
  cout << "before assignment s2 = " << s2 << endl;
  return 0;
}
