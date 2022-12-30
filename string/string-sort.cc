#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string zodiac[12];
  for (string &s : zodiac)
    cin >> s;

  for (int i = 10; i >= 1; i--)
    for (int j = 0; j <= i; j++)
      if (zodiac[j] > zodiac[j + 1])
	swap(zodiac[j], zodiac[j + 1]);

  for (string &s : zodiac)
    cout << s << endl;
  return 0;
}
