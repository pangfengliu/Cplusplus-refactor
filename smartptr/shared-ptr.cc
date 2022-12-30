#include <memory>
#include <iostream>
using namespace std;

int main()
{
  shared_ptr<int> aptr = make_shared<int>(3);
  cout << "main: count = "
       << aptr.use_count() << endl;
  cout << "*aptr = " << *aptr << endl;
  {
    shared_ptr<int> bptr {aptr};
    cout << "compound statement: count = "
	 << aptr.use_count() << " " 
	 << bptr.use_count() << endl;
    (*bptr) += 2;
    cout << "*bptr = " << *bptr << endl;
  }
  cout << "before return count = "
       << aptr.use_count() << endl;
  return 0;
}
