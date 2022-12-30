#include <iostream>
using namespace std;

int main()
{
  int count {0};
  int sum = {0};
  int grade;
  cin >> grade;
  while (grade >= 0) {
    sum += grade;
    count++;
    cin >> grade;
  }
  double average {sum / count};
  cout << average << ' ';
  average = static_cast<double>(sum) / count;
  cout << average << ' ';
  average = static_cast<double>(sum / count);
  cout << average << endl;
}

  
