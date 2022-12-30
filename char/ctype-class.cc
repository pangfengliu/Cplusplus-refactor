#include <iostream> 
using namespace std;

void check(char c)
{
  cout << "c = " << c << '\n';
  if (isalnum(c))
    cout << "isalnum\n";
  if (isalpha(c))
    cout << "isalpha\n";
  if (islower(c))
    cout << "islower\n";
  if (isupper(c))
    cout << "isupper\n";
  if (isdigit(c))
    cout << "isdigit\n";
  if (isxdigit(c))
    cout << "isxdigit\n";
  if (isprint(c))
    cout << "isprint\n";
  if (isgraph(c))
    cout << "isgraph\n";
  if (isspace(c))
    cout << "isspace\n";
  if (ispunct(c))
    cout << "ispunct\n";
  if (iscntrl(c))
    cout << "iscntrl\n";
  return;
}

int main(void)
{
  char c;
  while (cin >> c) 
    check(c);
  return 0;
}
