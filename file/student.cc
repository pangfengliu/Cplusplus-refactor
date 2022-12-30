#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;

void Student::input()
{
  cin >> name >> id >> phone;
  cin >> grade[0] >> grade[1] >> grade[2] >> grade[3];
  cin >> year >> month >> day;
}
void Student::output()
{
  cout << name << endl;
  cout << "id = " << id << endl;
  cout << "phone = " << phone << endl;
  cout << fixed << setprecision(2);
  cout << "grade = " << grade[0] << ' ' << grade[1] << ' '
       << grade[2] << ' ' << grade[3] << endl;
  cout << year << '/' << month << '/' << day << endl;
}
