#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  char s1[80];
  char s2[80];

  cin.getline(s1, 80).getline(s2, 80);
  cout << '(' << s1 << ')' << endl;
  cout << '(' << s2 << ')' << endl;
  return 0;
}
