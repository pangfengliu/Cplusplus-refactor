#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
  ifstream ifile;
  ofstream ofile;
  ofile.open("text_file1");
  for (int i = 0; i < 10; i++)
    ofile << '1';
  ofile.close();
  ofile.open("text_file2");
  for (int i = 0; i < 20; i++)
    ofile << '2';
  ofile.close();

  ifile.open("text_file1");
  ofile.open("text_file2");
  char c;
  while (ifile >> c)
    ofile << c;
  ifile.close();
  ofile.close();

  ifile.open("text_file2");
  while (ifile >> c)
    cout << c;
  ifile.close();
  return 0;
}
