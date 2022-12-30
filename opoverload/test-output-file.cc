#include "output-file.h"
using namespace std;

void dumpFile(const char *);
void write(const char *name, int size)
{
  OutputFile output(name);
  for (int i = 0; i < size; i++)
    output[i] = i;
  output[size] = output[size + 1] = size + 2;
}
int main(void)
{
  int n;
  cin >> n;
  write("int", n);
  dumpFile("int");
  return 0;
}
