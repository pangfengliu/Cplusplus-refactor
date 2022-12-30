#include <iostream>
using namespace std;

class Block
{
  int start;
  int length;
  Block *next;
 public:
 Block(int s, int l, Block *n):
  start(s), length(l), next(n) {};
  void cutFront(int s) {start += s; length -= s;}
  void cutBack(int s) {length -= s;}
  void growFront(int s) {start -= s; length += s;}
  void growBack(int s) {length += s;}
  int getStart() {return start;}
  int getLength() {return length;}
  Block *getNext() {return next;}
  void setNext(Block *n) {next = n;}
  bool contain(int adr) {
    return ((adr >= start) && (adr < start + length));
  }
  int end() {return (start + length);}
  void print() {cout << start << " " << length << endl;}
};
