#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void dumpFile(const char *filename, fstream::openmode mode);

#define ARRAYSIZE 16
int main(void)
{
  int a[ARRAYSIZE], b[ARRAYSIZE];
  for (int i = 0; i < ARRAYSIZE; i++)
    a[i] = i;

  ifstream ifile;
  ofstream ofile;
  ofile.open("int", fstream::binary);
  ofile.write((char *)a, sizeof(int) * ARRAYSIZE);
  ofile.close();
  ifile.open("int", fstream::binary);
  ifile.read((char *)b, sizeof(int) * ARRAYSIZE);
  ifile.close();

  for (int i = 0; i < ARRAYSIZE; i++)
    cout << b[i] << ' ';
  cout << endl;
  dumpFile("int", fstream::binary);
  return 0;
}
