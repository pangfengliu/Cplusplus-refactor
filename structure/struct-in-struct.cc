#include <iostream>
using namespace std;
//--structDay--
struct Date {
  int year;
  int month;
  int day;
};
struct Student {
  string name;
  int id;
  string phone;
  float GPA;
  Date birthDate;
};  
//--main--
int main(void)
{
  Student john {"John Smith", 12345, "1234567",
      3.5, {2000, 1, 1}};
  cout << "name is " << john.name << endl;
  cout << "id is " << john.id << endl;
  cout << "phone is " << john.phone << endl;
  cout << "GPA is " << john.GPA << endl;
  cout << "birthday is " << john.birthDate.year
       << john.birthDate.month
       << john.birthDate.day;
  return 0;
}
//--end--
