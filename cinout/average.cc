#include <iostream> 
using namespace std;

int main()
{
  int sum {0};
  int count {0};
  int i;
  while (cin >> i) {
    sum += i;
    count++;
  }
  cout << sum / count << endl;
  return 0;
}
