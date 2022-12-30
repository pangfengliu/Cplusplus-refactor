class Position {
 private:
  int row;
  int col;
 public:
  Position(const int r, const int c);
};
int main()
{
  // this is OK
  Position a(1, 2);
  // this does not compile
  Position b;
  return 0;
}

