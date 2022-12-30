#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void)
{
  string s;
  ifstream ifile;
  ifile.open("getline.cc");
  while (getline(ifile, s))
    cout << s;
  ifile.close();
  return 0;
}
