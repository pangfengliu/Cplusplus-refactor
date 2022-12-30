#include <iostream>
#include <vector>
using namespace std;

struct Life {
  int size;
  vector<vector<int>> cellA, cellB;
  vector<vector<int>> &from {cellA};
  vector<vector<int>> &to {cellB};
};
void initLife(Life &life);
void evolve(Life &life);
void changeDir(Life &life);
void printLife(const Life &life);
