#include <iostream>
using namespace std;

class Integer
{
  int *ptr;
public:
  Integer(): ptr(nullptr) {
    cout << "default constructor:" << endl;
  }
  Integer(int n) {
    cout << "convert constructor:" << endl;
    ptr = new int;
    *ptr = n;
  }
  ~Integer() {
    if (ptr == nullptr)
      cout << "~Integer:nothing" << endl;
    else {
      cout << "~Integer:" << *ptr << endl;
      delete ptr;
    }
  }
  void print(string msg) {
    cout << msg;
    if (ptr == nullptr)
      cout << "ptr == nullptr" << endl;
    else 
      cout << *ptr << endl;
  }
};

