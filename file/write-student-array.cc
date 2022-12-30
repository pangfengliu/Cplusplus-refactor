#include <iostream>
#include <fstream>
#include <iomanip>
#include "student.h"
using namespace std;
void dumpFile(const char *filename, fstream::openmode mode);

int main(void)
{
  Student source[2];
  source[0].input();
  source[1].input();
  for (int i = 0; i < 2; i++)
    source[i].output();

  ofstream ofile;
  ofile.open("student", fstream:: binary);
  ofile.write((char *)source, sizeof(Student) * 2);
  ofile.close();

  ifstream ifile;  
  Student destination[2];
  ifile.open("student", fstream:: binary);
  ifile.read((char *)destination, sizeof(Student) * 2);
  ifile.close();
  
  for (int i = 0; i < 2; i++)
    destination[i].output();
  dumpFile("student", fstream:: binary);
  return 0;
}
