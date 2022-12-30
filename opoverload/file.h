#define MAXFILENAME 128

class File {
  FILE *fp;
  char name[MAXFILENAME];
  int current_byte;
  int size;
 public:
  File(char *name);
  int operator[](int c);
  int getsize() {return size;}
};
