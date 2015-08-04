#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include "linkedList.h"
#include "item.h"

class HashTable{

 private:
  LinkedList *array;
  int length;
  int hash(string key);

 public:
  HashTable();
  void insertItem(Item *newItem);
  bool removeItem(string key);
  Item *getItem(string key);
  void printTable();
  void printHistogram();
  int getLength();
  int getNumberOfItems();
  ~HashTable();
};

#endif

