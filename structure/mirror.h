struct Position {
  int row;
  int col;
};
struct Movement {
  Position pos;
  int dir;
};
#define SIZE 100
struct Room {
  bool mirror[SIZE][SIZE];
  int R, C;
};


