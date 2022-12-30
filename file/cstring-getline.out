#include <iostream>
#include <fstream>
using namespace std;

#define MAXCHAR 128

int main(void)
{
  ifstream ifile;
  char line[MAXCHAR];		// C-sttle string

  ifile.open("cstring-getline.cc");
  while (ifile.getline(line, MAXCHAR))
    cout << line << endl;
  ifile.close();
  return 0;
}
