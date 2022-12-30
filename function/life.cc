#include <iostream>
#include <cassert>
using namespace std;

#define MAXSIZE 100

//--readLife--
void readLife(bool life[MAXSIZE][MAXSIZE], int n)
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      int temp;
      cin >> temp;
      life[i][j] = (temp == 1);
    }
}
//--neighborNum--
int neighborNum(bool life[MAXSIZE][MAXSIZE],
		int i, int j, int n)
{
  int neighbor {0};
  for (int dx = -1; dx <= 1; dx++)
    for (int dy = -1; dy <= 1; dy++)
      if (!(dx == 0 && dy == 0)) {
	int x = i + dx;
	int y = j + dy;
	if (x >= 0 && x < n && y >= 0
	    && y < n && life[x][y])
	  neighbor++;
      }
  return neighbor;
}
//--evolve--
void evolve(bool from[MAXSIZE][MAXSIZE],
	    bool to[MAXSIZE][MAXSIZE],
	    int n)
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      int neighbor = neighborNum(from, i, j, n);
      if (from[i][j])
	to[i][j] =
	  (neighbor == 2 || neighbor == 3);
      else       // life[i][j] == false 
	to[i][j] = (neighbor == 3);
    }
}
//--printLife--
void printLife(bool life[MAXSIZE][MAXSIZE], int n)
{
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
      if (j == n - 1)
	cout << life[i][j] << endl;
      else
	cout << life[i][j] << " ";
    }
}
//--main--
int main()
{
  int n, k;
  cin >> n >> k;
  assert(n >= 1 && n <= MAXSIZE && k > 0);

  int from {0}, to {1};
  bool life[2][MAXSIZE][MAXSIZE];

  readLife(life[from], n);
  
  for (int iter = 0; iter < k ; iter++) {
    evolve(life[from], life[to], n);
    from = ((from == 0)? 1 : 0);
    to = 1 - from;
  }

  printLife(life[from], n);
}
//-end--
