#include "input-file.h"
InputFile::InputFile(const char *name): name(name)
{
  cout << "open " << name << " for reading\n";
  ifile.open(name, ios_base::binary);
  ifile.seekg(0, ios_base::end);
  size = ifile.tellg();
}
InputFile::~InputFile()
{
  cout << "close " << name << endl;
  ifile.close();
}
char InputFile::operator[](int i)
{
  char c;
  ifile.seekg(i);
  ifile.get(c);
  return c;
}


