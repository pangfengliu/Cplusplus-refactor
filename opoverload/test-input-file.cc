#include "input-file.h"
using namespace std;
void dumpFile(const char *);

int main(void)
{
  int a[4] {127, 257, 65535, 2147483647};
  ofstream ofile;
  ofile.open("int", ios_base::binary);
  ofile.write((char *)a, sizeof(int) * 4);
  ofile.close();
  dumpFile("int");
  return 0;
}
