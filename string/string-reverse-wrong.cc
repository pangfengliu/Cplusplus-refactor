#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s1, s2;
  getline(cin, s1);
  auto len {s1.length()};

  for (int i = len - 1; i >= 0; i--) {
    s2.at(len - i - 1) = s1[i];
    cout << s1[i];
  }
  cout << endl;

  return 0;
}
