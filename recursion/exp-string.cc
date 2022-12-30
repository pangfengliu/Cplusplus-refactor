#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int expression(char **string)
{
  int left, right, v;
  if (isdigit(**string)) {
    v = **string - '0';
  } else {
    assert(**string == '(');
    (*string)++;
    left = expression(string);
    char op = **string;
    (*string)++;
    right = expression(string);
    switch (op) {
    case '+':
      v = left + right;
      break;
    case '-':
      v = left - right;
      break;
    case '*':
      v = left * right;
      break;
    case '/':
      v = left / right;
      break;
    default:
      printf("invalid op %c\n");
      exit(-1);
    }
    assert(**string == ')');
  }
 (*string)++;
 return v;
}

int main()
{
  char expString[100];
  char *ptr = expString;
  scanf("%s", ptr);
  printf("%d\n", expression(&ptr));
  return 0;
}
