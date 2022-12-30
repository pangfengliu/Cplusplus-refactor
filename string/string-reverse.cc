#include <iostream> 
#include <string>
#include <utility>		// for swap (C++11)
using namespace std;

int main(void)
{
  string s1;
  getline(cin, s1);
  auto len {s1.length()};

  for (int i = len - 1; i >= 0; i--)
    cout << s1[i];
  cout << endl;

  string s2 {s1};
  for (unsigned int i = 0; i < len / 2; i++)
    swap(s2.at(i), s2.at(len - i - 1));

  cout << s2 << endl;
  return 0;
}
