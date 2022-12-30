#include <stdio.h>

void shuffle(int *deck[])
{
  int n = 0;
  while (deck[n] != nullptr)
    n++;

  int *temp[10000];
  int first_half = 0;
  int second_half = (n + 1) / 2;
  for (int i = 0; i < n; i++)
    temp[i] = ((i % 2) == 0? deck[first_half++] : deck[second_half++]);

  for (int i = 0; i < n + 1; i++)	/* include the nullptr */
    deck[i] = temp[i];
  return;
}

void print(int *deck[])
{
  int i = 0;
  while (deck[i] != nullptr) {
    printf("%d ", *(deck[i]));
    i++;
  }
  printf("\n");
}

int main(void)
{
  int card[10000];
  int *deck[10000];
  int index = 0;

  while (scanf("%d", &(card[index])) != EOF) {
    deck[index] = &(card[index]);
    index++;
  }
  deck[index] = nullptr;

  shuffle(deck);
  print(deck);
  
  return 0;
}
