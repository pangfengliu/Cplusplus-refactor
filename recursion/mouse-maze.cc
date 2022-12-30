#include <iostream>
#include <iomanip>
using namespace std;

#define MAZESIZE 100
//--inmaze--
bool inMaze(const int row, const int column,
	    const int n, const int m)
{
  return(row >= 0 && row < n && 
	 column >= 0 && column < m);
}
//--gomaze--
bool goMaze(int maze[MAZESIZE][MAZESIZE],
	    const int step, const int currentRow,
	    const int currentColumn, 
	    const int endRow, const int endColumn, 
	    const int n, const int m)
{
  int drow[4] = {1, 0, -1, 0};
  int dcolumn[4] = {0, 1, 0, -1};
  if ((currentRow == endRow) && 
      (currentColumn == endColumn))
    return true;
  
  for (int d = 0; d < 4; d++) {
    int nextRow = currentRow + drow[d];
    int nextColumn = currentColumn + dcolumn[d];
    if (inMaze(nextRow, nextColumn, n, m) &&
	maze[nextRow][nextColumn] == 0) {
      maze[nextRow][nextColumn] = step;
      if (goMaze(maze, step + 1, nextRow, 
		  nextColumn, endRow, 
		  endColumn, n, m))
	return true;
      maze[nextRow][nextColumn] = 0;
    }
  }
  return false;
}
//--main--
int main(void)
{
  int n, m;
  cin >> n >> m;
  
  int maze[MAZESIZE][MAZESIZE];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> maze[i][j];

  int startRow, startColumn;
  int endRow, endColumn;
  cin >> startRow >> startColumn;
  cin >> endRow >> endColumn;

  maze[startRow][startColumn] = 1;
  goMaze(maze, 2, startRow, startColumn, 
	 endRow, endColumn, n, m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
      cout << setw(3) << maze[i][j];
    cout << endl;
  }
  return 0;
}
//--end--
