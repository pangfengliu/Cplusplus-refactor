#include <iostream> 
using namespace std;

int main(void)
{
  for (int i = 2; i <= 7; i++) {
    for (int j = 0; j <= 15; j++) {
      int k = i * 16 + j;
      cout << k << ' ';
    }
    cout << endl;
  }
  return 0;
}

