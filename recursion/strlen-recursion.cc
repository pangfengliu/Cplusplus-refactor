#include <stdio.h>

void print(const string name)
{
  if (name.length() == 0)
    return;
  cout << name[0];
  print(name[1]);
}

int main(void)
{
  string name;
  cin >> name;
  print(name);
  return 0;
}
