#include <iostream>
using namespace std;
#include "int-copy.h"

Integer::Integer(): ptr(nullptr)
{
  cout << "default constructor:" << endl;
}
Integer::Integer(int n)
{
  cout << "convert constructor:" << endl;
  ptr = new int;
  *ptr = n;
}
//--deep-copy--
Integer::Integer(const Integer & other)
{
  cout << "deep copy constructor:" << *(other.ptr) << endl;
  ptr = new int;
  *ptr = *(other.ptr);
}
//--deep-copy--
Integer& Integer::operator=(const Integer & other)
{
  cout << "deep copy assignment:" << *(other.ptr) << endl;
  if (ptr != nullptr)
    delete ptr;
  ptr = new int;
  *ptr = *(other.ptr);
  return *this;
}
Integer::~Integer()
{
  if (ptr == nullptr)
    cout << "~Integer:nothing" << endl;
  else {
    cout << "~Integer:" << *ptr << endl;
    delete ptr;
  }
}
void Integer::inc()
{
  (*ptr)++;
}
void Integer::print(string msg)
{
  cout << msg;
  if (ptr == nullptr)
    cout << "ptr == nullptr" << endl;
  else 
    cout << *ptr << endl;
}
