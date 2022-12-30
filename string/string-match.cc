#include <iostream> 
#include <string>
using namespace std;

int match(string pattern, string table[])
{
  int index {0};
  while (!table[index].empty()) {
    if (pattern == table[index])
      return index;
    index++;
  }
  return -1;
}

int main()
{
  string table[] 
    {"+", "-", "*", "/", "%", "==", "!=",
     "<", ">", "<=", ">=", ""};
  // empty string at the end
  
  string opr;
  while (cin >> opr)
    cout << opr << " " << match(opr, table) <<endl;
  return 0;
}
