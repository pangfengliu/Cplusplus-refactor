#include <iostream> 
using namespace std;

int main(void)
{
  int i;
  cin >> i;
  char c {i};
  c++;
  i++;
  if (c == -128)
    cout << "c is -128" << endl;
  cout << "i is " << i << endl;
  return 0;
}
