#include <iostream>
using namespace std;

//--Integer--
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
  //--move--
  Integer(Integer && other) {
    cout << "move constructor:" << *(other.ptr)
	 << endl;
    ptr = other.ptr;
    other.ptr = nullptr;
  };
  Integer& operator=(Integer && other) {
    cout << "move assignment:" << *(other.ptr)
	 << endl;
    ptr = other.ptr;
    other.ptr = nullptr;
    return *this;
  };
  //--move-end--
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

