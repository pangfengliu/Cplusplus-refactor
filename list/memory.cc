#include <iostream>
#include <cassert>
#include "memory.h"

using namespace std;

Memory::~Memory()
{
  Block *node {head};
  while (node != nullptr) {
    Block *next = node->getNext();
    cout << "delete ";
    node->print();
    delete node;
    node = next;
  }
}
void Memory::print()
{
  Block *block = head;
  while (block != nullptr) {
    block->print();
    block = block->getNext();
  }
}
//--allocate--
void Memory::allocate(int start, int length)
{
  int end {start + length};
  Block *current = head;
  Block *before = nullptr;
  while (!current->contain(start)) {
    before = current;
    current = current->getNext();
  }
  assert(current != nullptr);
  /* same */
  bool beginSame = (start == current->getStart());
  bool endSame = (end == current->end());
  if (beginSame && endSame) {
    if (before == nullptr) 
      head = current->getNext();
    else 
      before->setNext(current->getNext());
    delete current;
  } else if (beginSame)
    current->cutFront(length);
  else if (endSame) 
    current->cutBack(length);
  else {
    Block *after =
      new Block(end, (current->end() - end), current->getNext());
    current->setNext(after);
    current->cutBack(after->getLength() + length);
  }
}
//--free--
void Memory::free(int start, int length)
{
  int end {start + length};
  Block *current {head};
  Block *before {nullptr};
  while ((current != nullptr) && (start > current->getStart())) {
    before = current;
    current = current->getNext();
  }
  bool adjacentBefore =
   (before != nullptr) && (start == before->end());
  assert(!((before != nullptr) && before->end() > start));
  bool adjacentCurrent =
    (current != nullptr) && (end == current->getStart());
  assert(!((current != nullptr) && (end > current->getStart())));
  
  /* adjacent */
  if (adjacentBefore && adjacentCurrent) {
    before->growBack(length +current->getLength());
    before->setNext(current->getNext());
    delete current;
  } else if (adjacentBefore) 
    before->growBack(length);
  else if (adjacentCurrent) 
    current->growFront(length);
  else {
    Block *between = new Block(start, length, current);
    if (before == nullptr) 
      head = between; 
    else
      before->setNext(between);
  }
}
//--end--
