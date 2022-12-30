#include <iostream>

namespace pangfeng
{
  int cin {3}; 
}
int main()
{
  {
    using namespace pangfeng;
    std::cout << cin << std::endl;
  }
  {
    using namespace std;
    cin >> pangfeng::cin;
    cout << pangfeng::cin << endl;
  }
  return 0;
}
