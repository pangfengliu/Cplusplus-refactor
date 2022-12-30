#include <iostream>
using namespace std;
#include <sys/stat.h>

#define printPermission(buf, who) \
if (S_IR ## who & buf.st_mode) \
  cout << #who << " can read." << endl;		\
if (S_IW ## who & buf.st_mode) \
  cout << #who << " can write." << endl;		\
if (S_IX ## who & buf.st_mode) \
  cout << #who << " can exec." << endl; 

#define printAllPermission(buf) \
  printPermission(buf, USR) \
  printPermission(buf, GRP) \
  printPermission(buf, OTH)

int main(void)
{
  string pathname;
  cin >> pathname;
  struct stat stat_info;
  lstat(pathname.c_str(), &stat_info);

  printAllPermission(stat_info);
}
