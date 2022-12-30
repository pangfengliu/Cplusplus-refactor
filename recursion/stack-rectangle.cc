#include <iostream>
using namespace std;

//--paper--
typedef struct paper {
  int width;
  int height;
} Paper;
//--onTop--
bool onTop(const Paper a, const Paper b)
{
  return
    (a.width <= b.width && a.height <= b.height
     ||
     a.width <= b.height && a.height <= b.width);
}
//--solution--
typedef struct solution {
  int layer;
  int sum;
} Solution;
//--better--
Solution better(const Solution a, const Solution b)
{
  return
    (a.layer > b.layer ||
     (a.layer == b.layer && a.sum > b.sum)?
     a : b);
}
//--best--
Solution best
(const int index, const int n,
 const Paper top, const Paper papers[],
 const Solution solution) 
{
  if (index >= n)
    return solution;
 
  if (onTop(papers[index], top)) {
    Solution placed = {solution.layer + 1,
		       solution.sum + index};
    return better(best(index + 1, n, papers[index],
		       papers, placed),
		  best(index + 1, n, top,
		       papers, solution));
  } else
    return (best(index + 1, n, top,
		 papers, solution));
} 
//--bestEnd--
#define BOTTOM 100000
 
void printSolution(const Solution solution)
{
  cout << solution.layer << solution.sum << endl;
}
 
int main()
{
  int n;
  cin >> n;
  Paper papers[n];
  for (int i = 0; i < n; i++)
    cin >> papers[i].width >> papers[i].height;
 
  Paper bottom = {BOTTOM, BOTTOM}; 
  Solution zero = {0, 0}; 
  printSolution(best(0, n, bottom,
		     papers, zero));
  return 0;
}
