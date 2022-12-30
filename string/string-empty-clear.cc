#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s1;
  string s2 {"main()\n{\n}\n"};

  if (s1.empty())
    cout << "s1 is empty\n";

  if (s2.empty())
    cout << "s2 is empty\n";

  cout << "s1 = " << s1 << endl;
  cout << "s2 = " << s2;

  s2.clear();
  if (s2.empty())
    cout << "s2 is now empty\n";
  
  return 0;
}
