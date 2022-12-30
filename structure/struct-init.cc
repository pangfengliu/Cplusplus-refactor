#include <iostream>
using namespace std;

struct Student {
  string name;
  int id;
  string phone;
  float GPA;
  int birthYear, birthMonth, birthDay;
};  
int main(void)
{
  Student john {"John Smith", 12345, "1234567", 3.5, 2000, 1, 1};
  cout << "name is " << john.name << endl;
  cout << "id is " << john.id << endl;
  cout << "phone is " << john.phone << endl;
  cout << "GPA is " << john.GPA << endl;
  cout << "birthday is " << john.birthYear
	 << john.birthMonth << john.birthDay;
  return 0;
}

