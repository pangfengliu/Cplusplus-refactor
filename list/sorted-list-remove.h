#include "sorted-list.h"

namespace pangfeng {
  class SortedListRemove: public SortedList
  {
  private:
    ListNode *removeKeyFromList(int key, ListNode *head);
  public:
    explicit SortedListRemove(vector <int> keys):
      SortedList(keys) {};
    void remove(int key);
  };
}
