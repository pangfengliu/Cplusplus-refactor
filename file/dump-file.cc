#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void dumpFile(const char *name, fstream::openmode mode)
{
  char c;
  int count {0};
  ifstream ifile; 
  ifile.open(name, mode);

  cout << setfill('0');
  while (ifile.get(c)) {
    cout << hex << setw(2) << (c & 0xFF) << ' ';
    count++;
    if (count % 8 == 0)
      cout << endl;
  }
  ifile.close();
  cout << dec << count << " bytes in " << name << endl;
  return;
}
