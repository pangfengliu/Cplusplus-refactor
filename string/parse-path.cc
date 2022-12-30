#include <iostream> 
#include <string>
using namespace std;

int main(void)
{
  string pathname;
  size_t start {0};
  cin >> pathname;
  if (pathname[start] == '/')
    start++;
  
  while (start != string::npos) {
    auto slash = pathname.find("/", start);
    if (slash == string::npos) {
      cout << pathname.substr(start) << endl;
      start = string::npos;
    } else {
      cout << pathname.substr(start, slash - start)
	   << endl;
      start = slash + 1;
    }
  }
  return 0;
}
