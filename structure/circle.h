#define MAXSIZE 100
struct Position {
  int row;
  int col;
};
struct Movement {
  Position pos;
  int dir;
};
struct Board {
  int cell[MAXSIZE][MAXSIZE];
  int size;
  Movement movement;
};
