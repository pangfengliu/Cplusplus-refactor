#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class InputFile {
  ifstream ifile;
  string name;
  int size;
 public:
  InputFile(const char *name);
  ~InputFile();
  char operator[](int i);
  int getSize() const {return size;}
};
