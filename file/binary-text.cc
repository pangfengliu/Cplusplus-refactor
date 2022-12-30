#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void dumpFile(const char *name, 
	      fstream::openmode mode);

int main(void)
{
  ofstream ofile;

  ofile.open("binary", ios_base::binary);
  ofile << "hello\n";
  ofile.close();

  ofile.open("text");
  ofile << "hello\n";
  ofile.close();

  dumpFile("binary", ios_base::binary);
  dumpFile("text", ios_base:: binary);
  dumpFile("text", ios_base::in);

  return 0;
}
