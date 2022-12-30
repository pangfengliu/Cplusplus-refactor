#include <iostream> 
using namespace std;

int main(void)
{
  char c;
  cin.get(c);
  while (!cin.eof()) {
    cout << c;
    cin.get(c);
  }
  return 0;
}
