#include "input-file.h"
#include "output-file.h"

#define FILELENGTH 256

void dumpFile(const char *name);

void createFile(const char *name) 
{
  OutputFile numbers(name);
  for (int i = 0; i < FILELENGTH; i++)
    numbers[i] = i;
}

void copyFile(const char *source, const char *destination)
{
  InputFile sourceFile(source);
  OutputFile destinationFile(destination);

  cout << source << " has " << sourceFile.getSize() << " bytes" << endl;
  for (int i = 0; i < sourceFile.getSize(); i++) 
    destinationFile[i] = sourceFile[i];
}

int main()
{
  createFile("source");
  copyFile("source", "destination");
  dumpFile("destination");
  return 0;
}
