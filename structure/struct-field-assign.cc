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

//--main--
int main(void)
{
  Student john;
  john.name = "John Smith";
  john.id = 12345;
  john.phone = "1234567";
  john.GPA = 3.5;
  john.birthYear = 2000;
  john.birthMonth = 1;
  john.birthDay = 1;

  //--print--
  cout << "name is " << john.name << endl;
  cout << "id is " << john.id << endl;
  cout << "phone is " << john.phone << endl;
  cout << "GPA is " << john.GPA << endl;
  cout << "birthday is " << john.birthYear
	 << john.birthMonth << john.birthDay;
  return 0;
}
//--end--
