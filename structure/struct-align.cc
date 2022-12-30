#include <iostream>
#include <cstddef>
using namespace std;

struct Ints1 {
  int8_t int8;
  int16_t int16;
  int32_t int32;
};  
struct Ints2 {
  int8_t int8;
  int32_t int32;
  int16_t int16;
};  
int main(void)
{
  cout << "alignof(int8_t) = " << alignof(int8_t) << endl;
  cout << "alignof(int16_t) = " << alignof(int16_t) << endl;
  cout << "alignof(int32_t) = " << alignof(int32_t) << endl;
  cout << "alignof(Ints1) = " << alignof(Ints1) << endl;
  cout << "alignof(Ints2) = "<< alignof(Ints2) << endl;

  cout << "Offset within Ints1" << endl;
  cout << "offsetof int8 = " << offsetof(Ints1, int8) << endl;
  cout << "offsetof int16 = " << offsetof(Ints1, int16) << endl;
  cout << "offsetof int32 = " << offsetof(Ints1, int32) << endl;

  cout << "Offset within Ints2" << endl;
  cout << "offsetof int8 = " << offsetof(Ints2, int8) << endl;
  cout << "offsetof int32 = " << offsetof(Ints2, int32) << endl;
  cout << "offsetof int16 = " << offsetof(Ints2, int16) << endl;
  return 0;
}
