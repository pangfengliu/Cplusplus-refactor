#include <memory>
#include <iostream>
using namespace std;

int main()
{
  unique_ptr<int> aptr {new int(3)};
  cout << "main:" << endl;
  cout << "*aptr = " << *aptr << endl;
  {
    // shared_ptr<int> bptr {aptr};
    unique_ptr<int> bptr {move(aptr)};
    cout << "compound statement:" << endl;
    (*bptr) += 2;
    cout << "*bptr = " << *bptr << endl;
    aptr = move(bptr);
  }
  cout << "before return:" << endl;
  cout << "*aptr = " << *aptr << endl;
  return 0;
}
