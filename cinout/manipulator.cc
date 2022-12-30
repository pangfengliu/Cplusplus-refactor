#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int i;
  cin >> i;
  cout << dec << setw(6) << i << endl;
  cout << oct << setw(7) << i << endl;
  cout << hex << setw(8) << i << endl;

  cin >> hex >> i;
  cout << setfill('0'); 
  cout << dec << setw(6) << i << endl;
  cout << oct << setw(7) << i << endl;
  cout << hex << setw(8) << i << endl;
  cout << setfill(' '); 
  cout << left << setw(15) << "hello, world\n";
  cout << right << setw(15) << "hello, world\n";
  return 0;
}
