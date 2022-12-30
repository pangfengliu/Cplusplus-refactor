#include <stdio.h>
#include <stdlib.h>

#define SWITCH 9
#define GATE 9

int ok(int s, int G, int switches[SWITCH], int open[GATE][3])
{
  int i;
  for (i = 0; i < G; i++)
    if (abs(open[i][0]) <= s && abs(open[i][1]) <= s && abs(open[i][2]) <= s)
      if (((open[i][0] > 0 && switches[open[i][0]] == 0) || 
	   (open[i][0] < 0 && switches[-open[i][0]] != 0)) && 
	  ((open[i][1] > 0 && switches[open[i][1]] == 0) || 
	   (open[i][1] < 0 && switches[-open[i][1]] != 0)) &&
	  ((open[i][2] > 0 && switches[open[i][2]] == 0) || 
	   (open[i][2] < 0 && switches[-open[i][2]] != 0)))
	return 0;
  return 1;
}


void printSwitch(int switches[SWITCH], int S)
{
  int i;
  for (i = 1; i <= S; i++) 
    printf("%d ", switches[i]);
  printf("\n");
}

int setSwitch(int s, int S, int G, int switches[SWITCH], int open[GATE][3])
{
  int try;

  if (s > S) {
    printSwitch(switches, S);
    return 1;
  }

  for (try = 0; try <= 1; try++) {
    switches[s] = try;

    if (!ok(s, G, switches, open))
	continue;

    if (setSwitch(s + 1, S, G, switches, open))
      return 1;
  }
  return 0;
}

int main(void)
{
  int i, j, S, G;
  int open[GATE][3];
  int switches[SWITCH];

  scanf("%d%d", &S, &G);
  for (i = 0; i < G; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &(open[i][j]));

  if (setSwitch(1, S, G, switches, open) == 0)
    printf("no solution\n");
  return 0;
}
