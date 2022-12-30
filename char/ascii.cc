#include <iostream> 
using namespace std;

int main(void)
{
  cout << "0123456789abcdef\n";
  for (int i = 2; i <= 7; i++) {
    for (int j = 0; j <= 15; j++) {
      char c = i * 16 + j;
      cout << c;
    }
    cout << endl;
  }
  return 0;
}

