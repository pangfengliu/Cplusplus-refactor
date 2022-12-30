#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int id;
  string phone;
  float GPA;
  int birthYear, birthMonth, birthDay;
};  
/* main */
int main(void)
{
  Student john;
  auto ptr {&john};
  ptr->name = "John Smith";
  ptr->id = 12345;
  ptr->phone = "1234567";
  ptr->GPA = 3.5;
  ptr->birthYear = 2000;
  ptr->birthMonth = 1;
  ptr->birthDay = 1;
  //--print--
  cout << "name is " << john.name << endl;
  cout << "id is " << john.id << endl;
  cout << "phone is " << john.phone << endl;
  cout << "GPA is " << john.GPA << endl;
  cout << "birthday is " << john.birthYear
	 << john.birthMonth << john.birthDay;
  return 0;
}
/* end */
