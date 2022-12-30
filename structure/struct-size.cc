#include <iostream>
using namespace std;

struct Integers1 {
  int8_t int8;
  int16_t int16;
  int32_t int32;
};  
struct Integers2 {
  int8_t int8;
  int32_t int32;
  int16_t int16;
};  
int main(void)
{
  cout << "sizeof(int8_t) = " << sizeof(int8_t) << endl;
  cout << "sizeof(int16_t) = " << sizeof(int16_t) << endl;
  cout << "sizeof(int32_t) = " << sizeof(int32_t) << endl;
  cout << "total = " << sizeof(int8_t) + sizeof(int16_t) +
    sizeof(int32_t) << endl;
    
  Integers1 ints1;
  cout << "sizeof(ints1) = " << sizeof(ints1) << endl;
  Integers2 ints2;
  cout << "sizeof(ints2) = " << sizeof(ints2) << endl;
  return 0;
}
