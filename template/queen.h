#include <vector>

class Queens
{
private:
  int size;
  vector<int> pos;
public:
  Queens(int s = 8): size(s) {};
  void append(int k) {pos.push_back(k);}
  bool conflict(int k) const;
  int placed() const {return pos.size();};
  void print() const;
};
