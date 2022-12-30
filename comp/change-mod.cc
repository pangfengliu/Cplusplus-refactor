#include <iostream>
using namespace std;

main()
{
  int change;
  cin >> change;
  
  int fifty {change / 50};
  change = change % 50;
  int ten {change / 10};
  change = change % 10;
  int five {change / 5};
  int one {change % 5};

  cout << fifty << endl;
  cout << ten << endl; 
  cout << five << endl;
  cout << one << endl;
}
