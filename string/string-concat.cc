#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string s1, s2;
  cin >> s1 >> s2;
  cout << "the length of s1 " << s1 << " is " <<
    s1.length() << endl;
  cout << "the length of s2 " << s2 << " is " <<
    s2.length() << endl;

  string s3 {s1 + " " + s2};

  cout << "the length of s3 " << s3 << " is " <<
    s3.length() << endl;
  
  s3 += " again.";

  cout << "the length of s3 " << s3 << " is " <<
    s3.length() << " after += " << endl;

  return 0;
}
