#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s1, s2;

  (cin >> s1) >> s2;  // same as cin >> s1 >> s2;

  // these two are the same
  ((cout << s1) << s2) << endl;
  cout << s1 << s2 << endl;

  return 0;
}
