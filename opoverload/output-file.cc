#include "output-file.h"

OutputFile::OutputFile(const char *n): name(n)
{
  cout << "open " << name << " for writing" << endl;
  ofile.open(name, ios_base::binary);
}
OutputFile::~OutputFile()
{
  cout << "close " << name << endl;
  ofile.close();
}
FileHandle OutputFile::operator[](int i)
{
  return FileHandle(ofile, i);
}
FileHandle::FileHandle(ofstream &ofile, int offset):
  ofile(ofile), offset(offset) 
{
}
int FileHandle::operator=(int v)
{
  ofile.seekp(offset * sizeof(int));
  ofile.write((char *)(&v), sizeof(int));
  return(v);
}

