#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
  ofstream ofile;
  ofile.open("text_file1");
  for (int i = 0; i < 10; i++)
    ofile << i << endl;
  ofile.close();

  ifstream ifile;
  ifile.open("text_file1");
  int sum {0};
  int i;
  while (ifile >> i)
    sum += i;
  ifile.close();
    
  ofile.open("text_file2");
  ofile << sum << endl;
  ofile.close();

  ifile.open("text_file2");
  int anotherSum;
  ifile >> anotherSum;
  cout << anotherSum << endl;
  ifile.close();

  return 0;
}
