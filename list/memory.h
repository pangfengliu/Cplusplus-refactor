#include "block.h"

class Memory
{
  int size;
  Block *head;
 public:
 explicit Memory(int s): size(s)
  {head = new Block(0, size, nullptr);}
  ~Memory();
  void allocate(int start, int length);
  void free(int start, int length);
  void print();
};
