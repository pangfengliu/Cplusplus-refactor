#include <iostream> 
#include <string>
using namespace std;

#define ZODIAC 12

int main(void)
{
  string zodiac[ZODIAC];
  for (string &name: zodiac)
    cin >> name;

  for (string &name: zodiac) {
    auto pos {name.find("er")};
    if (pos == string::npos)
      cout << "No er in " << name << endl;
    else
      cout << "er at " << pos << "-th in " << 
	name << endl;
  }
  return 0;
}
