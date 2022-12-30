#include <iostream> 
#include <iomanip>
#include <locale>
using namespace std;

int main(void)
{
  cout << "   0123456789\n";
  for (int i = 30; i <= 127; i++) {
    if (i % 10 == 0)
      cout << setw(2) << i / 10 << ' ';
    char c = i;
    if (isprint(c))
      cout << c;
    else
      cout << ' ';
    if (i % 10 == 9)
      cout << endl;
  }
  return 0;
}

