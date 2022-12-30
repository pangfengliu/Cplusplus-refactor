#include <stdio.h>

int ways(int r, int c, int n, int m, int maze[50][50])
{
  int v;

  if (r == n - 1 && c == m - 1)
    return 1;
  else {
    v = 0;
    if (r + 1 < n && maze[r + 1][c] == 1)
      v += ways(r + 1, c, n, m, maze);
    if (c + 1 < m && maze[r][c + 1] == 1)
      v += ways(r, c + 1, n, m, maze);
    return v;
  }
}

int main(void)
{
  int n, m;
  int i, j;
  int maze[50][50];

  scanf("%d%d", &n, &m);
  for (i = n - 1; i >= 0; i--)
    for (j = 0; j < m; j++)
      scanf("%d", &(maze[i][j]));

  printf("%d\n", ways(0, 0, n, m, maze));

  return 0;
}
