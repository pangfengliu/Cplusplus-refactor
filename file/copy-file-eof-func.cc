#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
  ifstream ifile;
  ofstream ofile;
  char c;

  ofile.open("file1");
  for (int i = 0; i < 10; i++)
    ofile << '1';
  ofile.close();

  ofile.open("file2");
  for (int i = 0; i < 20; i++)
    ofile << '2';
  ofile.close();

  ifile.open("file1");
  ofile.open("file2");
  ifile >> c;
  while (!ifile.eof()) {
    ofile << c;
    ifile >> c;
  }
  ifile.close();
  ofile.close();

  ifile.open("file2");
  ifile >> c;
  while (!ifile.eof()) {
    cout << c;
    ifile >> c;
  }
  ifile.close();
  return 0;
}
