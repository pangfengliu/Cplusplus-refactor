#include <bitset>
using namespace std;

struct Number {
  int ones;
  bitset<4> bits;
};
#define ARRAYSIZE 1000
struct NumberSet {
  Number numbers[ARRAYSIZE];
  int count;
};

