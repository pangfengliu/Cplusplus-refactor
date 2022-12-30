#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandle 
{
  ofstream &ofile;
  int offset;
 public:
  FileHandle(ofstream &ofile, int offset);
  int operator=(int v);
};
class OutputFile 
{
  ofstream ofile;
  string name;
 public:
  OutputFile(const char *name);
  ~OutputFile();
  FileHandle operator[](int i);
};


