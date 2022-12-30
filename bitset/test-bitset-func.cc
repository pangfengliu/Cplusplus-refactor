#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
  bitset<8> permit {5};

  permit.set(7);
  if (permit[7] == 1)
    cout << "bit 7 on\n";
  else
    cout << "bit 7 off\n";
  cout << "after setting bit 7 permit = "
       << permit << endl;
  
  permit.reset(7);
  if (permit[7] == 1)
    cout << "bit 7 on\n";
  else
    cout << "bit 7 off\n";
  cout << "after resetting bit 7 permit = "
       << permit << endl;

  return 0;
}
