#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "item.h"
using namespace std;

class LinkedList
{
 private:
  Item *head;
  int length;
  void printAssist(int len, Item *currentItem);

 public:
  LinkedList();
  void insertItem(Item *newItem);
  bool removeItem(string key);
  Item *getItem(string key);
  void printList();
  int getLength();
  ~LinkedList();
};

#endif
