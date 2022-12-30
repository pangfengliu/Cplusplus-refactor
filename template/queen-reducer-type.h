#include "dfs-reducer-type.h"

class Queens: public DFS<Queens, vector<int>>
{
private:
  int boardSize;
  vector <int> pos;
  void append(int k) {pos.push_back(k);};
  bool conflict(int k);
public:
 Queens(int s = 8): boardSize(s)
  {};
  bool terminal() override {return pos.size() == boardSize;}
  void process() override; 
  vector<Queens> divide() override;
};
bool Queens::conflict(int k)
{
  auto placed {pos.size()};
  for (decltype(placed) j = 0; j < placed; j++) 
    if (pos[j] == k || (abs(k - pos[j]) == (placed - j)))
      return true;
  return false;
}
void Queens::process()
{
  vector<int> ans;
  for (int k = 0; k < boardSize; k++)
    ans.push_back(pos[k]);
  solution = ans;
}
vector<Queens> Queens::divide()
{
  vector<Queens> siblings;
  for (int k = 0; k < boardSize; k++) {
    if (!conflict(k)) {
      Queens next = *this;	
      next.append(k);
      siblings.push_back(next);
    }
  }
  return siblings;
}
class QueensReducer: public Reducer<Queens, vector<vector<int>>>
{
public:
  QueensReducer() {}  
  void reduce(Queens &toreduce) override
  {result.push_back(toreduce.getSolution());}
};


