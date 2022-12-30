#include <iostream>
#include <fstream>
#include <cassert>
#include "student.h"
using namespace std;

#define STUDENT 3

int main(void)
{
  Student a[STUDENT];
  int size = sizeof(Student);
  cout << "size = " << size << endl << endl;
  for (int i = 0; i < STUDENT; i++)
    a[i].input();
  cout << "The data in a" << endl;
  for (int i = 0; i < STUDENT; i++) {
    a[i].output();
    cout << endl;
  }

  ofstream ofile;  
  ofile.open("student", fstream::binary);
  ofile.write((char *)a, size * STUDENT);
  ofile.close();

  ifstream ifile;
  Student b;
  ifile.open("student", fstream::binary);
  ifile.seekg(size * 2);
  cout << "seekg(size * 2)" << endl;
  cout << "before read tellg = " << ifile.tellg() << endl;
  ifile.read((char *)&b, size);
  cout << "after read tellg = " << ifile.tellg() << endl;
  b.output();
  cout << endl;

  cout << "seekg(size, ios_base::beg)" << endl;
  ifile.seekg(size, ios_base::beg);
  cout << "before read tellg = " << ifile.tellg() << endl;
  ifile.read((char *)&b, size);
  cout << "after read tellg = " << ifile.tellg() << endl;
  b.output();
  cout << endl;

  cout << "seekg(-2 * size, ios_base::cur)"<< endl;
  ifile.seekg(-2 * size, ios_base::cur);
  cout << "before read tellg = " << ifile.tellg() << endl;
  ifile.read((char *)&b, size);
  cout << "after read tellg = " << ifile.tellg() << endl;
  b.output();
  cout << endl;
  
  cout << "seekg(-3 * size, ios_base::end)"<< endl;
  ifile.seekg(-3 * size, ios_base::end);
  cout << "before read tellg = " << ifile.tellg() << endl;
  ifile.read((char *)&b, size);
  cout << "after read tellg = " << ifile.tellg() << endl;
  b.output();
  cout << endl;
  ifile.close();

  fstream iofile;
  iofile.exceptions(fstream::badbit | fstream::failbit);
  try {
    iofile.open("student", ios_base::binary | ios_base::out);
    cout << "seekp(size)" << endl;
    iofile.seekp(size);
    cout << "before write tellp = " << iofile.tellp() << endl;
    iofile.write((char *)(a + 2), size);
    cout << "after write tellp = " << iofile.tellp() << endl;

    cout << "seekp(2 * size)" << endl;
    iofile.seekp(2 * size);
    cout << "before write tellp = " << iofile.tellp()<< endl;
    iofile.write((char *)(a), size);
    cout << "after write tellp = " << iofile.tellp() << endl;

    cout << "seekp(0)" << endl;
    iofile.seekp(0);
    cout << "before write tellp = " << iofile.tellp()<< endl;
    iofile.write((char *)(a + 1), size);
    cout << "after write tellp = " << iofile.tellp() << endl;

    iofile.flush();
    iofile.close();
  }
  catch (const ios_base::failure &e) {
    cout << e.what() << endl << endl;
  }

  Student c[STUDENT];
  cout << endl;
  ifile.open("student", ios_base::binary | ios_base::in);
  cout << "before read tellp = " << ifile.tellg() << endl;
  ifile.read((char *)c, size * STUDENT);
  cout << "after read tellp = " << ifile.tellg() << endl;
  ifile.close();

  cout << "The data in c" << endl;
  for (int i = 0; i < STUDENT; i++) {
    c[i].output();
    cout << endl;
  }
  return 0;
}
