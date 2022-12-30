#include "input-file.h"
#include <iomanip>
using namespace std;

void dumpFile(const char *name)
{
  InputFile inputFile(name);
  cout << setfill('0');
  auto inputSize {inputFile.getSize()};
  for (int i = 0; i < inputSize; i++) {
    cout << hex << setw(2) << (inputFile[i] & 0xff) << ' ';
    if (i % 8 == 7)
      cout << endl;
  }
  cout << endl << dec << inputFile.getSize()
       << " bytes in " << name << endl;
  return;
}
