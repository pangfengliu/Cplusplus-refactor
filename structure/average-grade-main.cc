#include <iostream> using namespace std;
#include "grade.h"

float average_grade(struct student *std_ptr);

int main(void) 
{
  int i;
  struct student std;
  scanf("%d", &(std.count));
  for( i = 0 ; i < std.count ; i++ )
    scanf("%d", &(std.grade[i]));
  printf("%f\n", average_grade(&std));
  return 0;
}
