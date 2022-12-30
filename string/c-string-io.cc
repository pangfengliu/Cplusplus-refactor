#include <iostream>
using namespace std;

int main(void)
{
  char string[10];
  while (cin >> string) {
    cout << string << endl;
    for (int i = 0; i < 10 && string[i] != '\0';
	 i++)
      cout << string[i] << ' ';
    cout << endl;
  }
}
