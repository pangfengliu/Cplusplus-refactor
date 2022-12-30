#include <iostream>
using namespace std;
#include <sys/stat.h>

int main(void)
{
  string pathname;
  cin >> pathname;
  struct stat stat_info;
  stat(pathname.c_str(), &stat_info);

  if (0400 & stat_info.st_mode) 
    cout << "USR can read." << endl;
  if (0200 & stat_info.st_mode) 
    cout << "USR can write." << endl;
  if (0100 & stat_info.st_mode) 
    cout << "USR can exec." << endl;

  if ((0400 >> 3) & stat_info.st_mode)
    cout << "GRP can read." << endl;
  if ((0200 >> 3) & stat_info.st_mode)
    cout << "GRP can write." << endl;
  if ((0100 >> 3) & stat_info.st_mode) 
    cout << "GRP can exec." << endl;

  if (((0400 >> 3) >> 3) & stat_info.st_mode) 
    cout << "OTH can read." << endl;
  if (((0200 >> 3) >> 3) & stat_info.st_mode) 
    cout << "OTH can write." << endl;
  if (((0100 >> 3) >> 3) & stat_info.st_mode) 
    cout << "OTH can exec." << endl;

  return 0;
}
