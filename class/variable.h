#include <string>
using namespace std;

//--Variable--
class Variable {
 private:
  string name;
  int value;
 public:
  Variable(const string n = "", const int v = 0):
    name(n), value(v) {};
  string getName() const {return name;};
  int getValue() const {return value;};
  void setValue(int v) {value = v;};
};

