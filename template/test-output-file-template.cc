#include <cstdint>
#include "output-file-template.h"
using namespace std;
void dumpFile(const char *);

template<class Element>
void writeInt(const char *name, int n)
{
  OutputFile<Element> output(name);
  for (int i = 0; i < n; i++)
    output[i] = i;
  output[n] = output[n + 1] = n + 2;
}
int main(void)
{
  int n;
  cin >> n;
  writeInt<int8_t>("int_8", n);
  dumpFile("int_8");
  writeInt<int16_t>("int_16", n);
  dumpFile("int_16");
  writeInt<int32_t>("int_32", n);
  dumpFile("int_32");
  writeInt<int64_t>("int_64", n);
  dumpFile("int_64");
  return 0;
}
