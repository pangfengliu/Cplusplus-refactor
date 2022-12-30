#include "linked-list.h"

namespace pangfeng {
  class SortedList: public LinkedList
  {
  public:
    explicit SortedList(vector <int> keys);
    void insert(int key);
  };
}
