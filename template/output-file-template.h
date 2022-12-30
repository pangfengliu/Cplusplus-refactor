#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template<class Element>
class FileHandle 
{
  ofstream &ofile;
  int offset;
 public:
  FileHandle(ofstream &ofile, int offset)
    :ofile(ofile), offset(offset) {}
  Element operator=(Element e) {
    ofile.seekp(offset * sizeof(Element));
    ofile.write((char *)(&e), sizeof(Element));
    return(e);
  }
};
template<class Element>
class OutputFile 
{
  ofstream ofile;
  string name;
 public:
  OutputFile(const char *n): name(n) {
    cout << "open " << name << " for writing" << endl;
    ofile.open(n, ios_base::binary);
  }
  ~OutputFile() {
    cout << "close " << name << endl;
    ofile.close();
  }
  FileHandle<Element> operator[](int i) {
    return FileHandle<Element>(ofile, i);
  }
};






