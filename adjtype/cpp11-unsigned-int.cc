#include <iostream>
#include <cstdint>
using namespace std;

int main(void)
{
  cout << "sizeof(uint8_t) = " << sizeof(uint8_t) << endl;
  cout << "sizeof(uint16_t) = " << sizeof(uint16_t) << endl;
  cout << "sizeof(uint32_t) = " << sizeof(uint32_t) << endl;
  cout << "sizeof(uint64_t) = " << sizeof(uint64_t) << endl;

  cout << "UINT8_MIN = " << UINT8_MAX << endl;
  cout << "UINT16_MIN = " << UINT16_MAX << endl;
  cout << "UINT32_MIN = " << UINT32_MAX << endl;
  cout << "UINT64_MIN = " << UINT64_MAX << endl;
  return 0;
}
