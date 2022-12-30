#define MAXSIZE 100

struct Life {
  bool cellA[MAXSIZE][MAXSIZE];
  bool cellB[MAXSIZE][MAXSIZE];
  int size;
  bool (*from)[MAXSIZE][MAXSIZE];
  bool (*to)[MAXSIZE][MAXSIZE];
};
