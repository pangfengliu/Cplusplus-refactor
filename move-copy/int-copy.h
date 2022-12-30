#include <iostream>
using namespace std;

class Integer
{
  int *ptr;
public:
  Integer();
  Integer(int n);
  // the following two functions are deep copy
  Integer(const Integer & other); 
  Integer& operator=(const Integer & other); 
  ~Integer();
  void inc();
  void print(string msg);
};

