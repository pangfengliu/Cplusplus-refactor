#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  ifstream ifile;
  ofstream ofile;
  fstream iofile;
  char c; 

  ofile.open("text_file1");
  for (int i = 0; i < 10; i++)
    ofile << '1';
  ofile.close();

  ofile.open("text_file2");
  for (int i = 0; i < 20; i++)
    ofile << '2';
  ofile.close();

  ifile.open("text_file1");
  iofile.open("text_file2");

  while (ifile >> c)
    iofile << c;
  ifile.close();
  iofile.close();

  iofile.open("text_file2");
  while (iofile >> c)
    cout << c;
  iofile.close();
  return 0;
}
