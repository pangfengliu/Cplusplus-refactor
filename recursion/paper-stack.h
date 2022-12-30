#include <vector>
using namespace std;
#include "paper.h"
#include "solution.h"

class PaperStack {
  vector<Paper> stack;
 public:
  PaperStack(vector<Paper> s): stack(s) {};
  Solution best(const unsigned int index, const Paper &top, 
		const Solution &solution);
};

